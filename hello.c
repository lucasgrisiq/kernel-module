#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("Dual BSD/GPL");

static int param = -1;

module_param(param, int, 0000);

static int __init hello_init(void) {
    printk(KERN_ALERT "Hello world!\n");
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_ALERT "Parametro digitado foi = %d\n", param);
}

module_init(hello_init);
module_exit(hello_exit);