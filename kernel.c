#include <linux/kernel.h>

void my_kernel_function() {
    printk(KERN_INFO "My kernel module is loaded.\n");
    printk(KERN_ERR "An error occurred in my_kernel_function.\n");
}