#include<stdio.h>
#include<unistd.h>

void main()
{
	printf("Hello Linux ");
	printf("\npid = %d\n",getpid()); // getpid helps to fetch process id
	return;
}
