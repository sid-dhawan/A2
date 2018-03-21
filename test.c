#include <stdio.h>
#include <time.h>
#define rtnice 323
int main()
{
	long i,x,x2,x3,p=1;
	clock_t t;
	x=fork();
	if(x==0)
	{
		t=clock();
		printf("P2\n");
		for(i=0;i<=200;i++);
		t=clock()-t;
		printf("Time 2: %f\n",(float)t/CLOCKS_PER_SEC);
	}
	else
	{
		syscall(rtnice,x,0);
		syscall(rtnice,getpid(),10000000000);
		t=clock();
		printf("P1\n");
		for(i=0;i<=200;i++);
		t=clock()-t;
		printf("Time 1: %f\n",(float)t/CLOCKS_PER_SEC);

		wait();
	}	
	return 0;
}
