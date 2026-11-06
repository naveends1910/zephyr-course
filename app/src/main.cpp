#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/sys/printk.h>
#include <led_sensor/led_sensor.h>


int main()
{
    const struct device *dev = DEVICE_DT_GET_ANY(custom_led_sensor);

    if (dev == NULL || !device_is_ready(dev)) {
        printk("LED sensor not ready\n");
        return 0;
    }

    struct sensor_value val;
    int cycle = 0;

    while (1) {
        if (cycle % 5 == 0) {
            bool enable = (cycle / 5) % 2 == 0;
            led_sensor_set_enabled(dev, enable);
            printk("LED sensor %s\n", enable ? "enabled" : "disabled");
        }

        sensor_sample_fetch(dev);
        k_msleep(500);
        sensor_channel_get(dev, SENSOR_CHAN_ALL, &val);
        printk("LED was %d, now off\n", val.val1);
        k_msleep(500);
        cycle++;
    }


    return 0;
}
