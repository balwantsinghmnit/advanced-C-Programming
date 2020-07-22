#include<stdio.h>
#include<unistd.h>

void main()
{
	int i=100, j=200; 
	printf("namaste\n");
	i=fork();
	sleep(15);
	if (i==0)
	{	
		printf("hey i am child with pid=%d\n", getpid());
		printf("hey i am child with parent pid=%d\n", getppid());
	}
	else
	{
		printf("hello i am parent with pid=%d\n", getpid());
	}
	printf("good morning\n-----\n");
	return;
}