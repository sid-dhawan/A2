#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#define rtnice 323
int main()
{
	long p_id,sr_prio;
	printf("Enter the PID: ");
	scanf("%ld",&p_id);
	printf("Enter the soft runtime guarantee: ");
	scanf("%ld",&sr_prio);
	syscall(323,p_id,sr_prio);
	return 0;
}
