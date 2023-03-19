#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/spi/spi.h>
#include <linux/property.h>
#include <linux/gpio/consumer.h>

static int __init lcd_init(void)
{
	printk(KERN_ALERT "Hello all\n");
	return 0;
}

static void __exit  lcd_exit(void)
{
	printk(KERN_ALERT "Goodbye all\n");

}

module_init(lcd_init);
module_exit(lcd_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aliliche Larbi");
MODULE_DESCRIPTION("A simple Linux Kernel Module");
MODULE_VERSION("0.1");
