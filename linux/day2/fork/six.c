#include<stdio.h>
#include<unistd.h>

void main()
{
	int i=100, j=200; 
	printf("namaste\n");
	i=fork();
	if (i==0)
	{	
		j = 300;
		printf("hey i am child with pid=%d\n", getpid());
	}
	else
	{
		sleep(1);
		printf("hello i am parent with pid=%d\n", getpid());
		printf("j=%d\n", j);
	}
	printf("good morning\n-----\n");
	
//	sleep(10);
	return;
}