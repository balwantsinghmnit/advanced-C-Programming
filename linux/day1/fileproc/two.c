#include<stdio.h>
#include<unistd.h>

void main()
{
	int pid = getpid();
	printf("my pid = %d\n",pid);
	sleep(20);
	printf("will exit now\n");
	sleep(1);
	return;
}