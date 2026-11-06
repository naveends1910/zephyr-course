#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/sys/printk.h>

int main()
{
    const struct device *dev = DEVICE_DT_GET_ANY(custom_led_sensor);

    if (dev == NULL || !device_is_ready(dev)) {
        printk("LED sensor not ready\n");
        return 0;
    }

    printk("LED sensor ready. Try: sensor info\n");
    return 0;
}
