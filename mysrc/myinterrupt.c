
#include <linux/printk.h>

/*
 * Called by timer interrupt.
 */
void my_timer_handler(void)
{
	printk(KERN_NOTICE "\n>>>>>>>>>>>>>>>>>my_timer_handler here<<<<<<<<<<<<<<<<<<\n\n");
}
