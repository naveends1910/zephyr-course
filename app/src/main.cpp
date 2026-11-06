#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/sys/printk.h>

int main()
{
    const struct device *dev = DEVICE_DT_GET_ANY(custom_led_sensor);

    if (dev == NULL || !device_is_ready(dev)) {
        printk("LED sensor not ready\n");
        return 0;
    }

    struct sensor_value val;

    while (1) {
        sensor_sample_fetch(dev);                         // LED on
        k_msleep(500);
        sensor_channel_get(dev, SENSOR_CHAN_ALL, &val);   // LED off
        printk("LED was %d, now off\n", val.val1);
        k_msleep(500);
    }

    return 0;
}
