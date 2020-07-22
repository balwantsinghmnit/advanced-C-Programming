#include<stdio.h>
#include<unistd.h>

void main()
{
	int i=2;
	printf("pid = %d\n",getpid());
	for(i=0;10;i++)
	{
		printf("%d running since %d secs\n",getpid(),i);
		sleep(1);
	}
	return;
}
