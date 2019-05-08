#include <linux/printk.h>

void __init my_start_kernel(void)
{
	int i = 0;
	while(1){
		i++;
		if(i % 100000 == 0)
			printk(KERN_NOTICE "my_start_kernel here %d\n",i);
	}
}
