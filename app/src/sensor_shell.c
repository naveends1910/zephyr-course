#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/shell/shell.h>

static const struct device *const led_dev = DEVICE_DT_GET_ANY(custom_led_sensor);

static int cmd_sensor_fetch(const struct shell *sh, size_t argc, char **argv)
{
	ARG_UNUSED(argc);
	ARG_UNUSED(argv);

	if (!device_is_ready(led_dev)) {
		shell_error(sh, "Device %s not ready", led_dev->name);
		return -ENODEV;
	}

	int ret = sensor_sample_fetch(led_dev);

	if (ret < 0) {
		shell_error(sh, "sensor_sample_fetch failed: %d", ret);
		return ret;
	}

	shell_print(sh, "Sample fetched (LED on)");
	return 0;
}

static int cmd_sensor_read(const struct shell *sh, size_t argc, char **argv)
{
	ARG_UNUSED(argc);
	ARG_UNUSED(argv);

	struct sensor_value val;

	if (!device_is_ready(led_dev)) {
		shell_error(sh, "Device %s not ready", led_dev->name);
		return -ENODEV;
	}

	int ret = sensor_channel_get(led_dev, SENSOR_CHAN_ALL, &val);

	if (ret < 0) {
		shell_error(sh, "sensor_channel_get failed: %d", ret);
		return ret;
	}

	shell_print(sh, "Value: %d.%06d (LED was %s, now off)", val.val1, val.val2,
		    val.val1 ? "on" : "off");
	return 0;
}

static int cmd_sensor_info(const struct shell *sh, size_t argc, char **argv)
{
	ARG_UNUSED(argc);
	ARG_UNUSED(argv);

	shell_print(sh, "Device: %s", led_dev->name);
	shell_print(sh, "Ready:  %s", device_is_ready(led_dev) ? "yes" : "no");
	return 0;
}

SHELL_STATIC_SUBCMD_SET_CREATE(sub_sensor,
	SHELL_CMD(fetch, NULL, "Fetch a sample (turns LED on)", cmd_sensor_fetch),
	SHELL_CMD(read, NULL, "Read and print the value (turns LED off)", cmd_sensor_read),
	SHELL_CMD(info, NULL, "Print device name and ready state", cmd_sensor_info),
	SHELL_SUBCMD_SET_END
);

SHELL_CMD_REGISTER(sensor, &sub_sensor, "LED sensor commands", NULL);
