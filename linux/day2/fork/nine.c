#include<stdio.h>
#include<unistd.h>

void main()
{
	int i=100, j=200; 
	printf("namaste\n");
	i=fork();
	if (i==0)
	{	
		printf("hey i am child with pid=%d\n", getpid());
		printf("hey i am child with parent pid=%d\n", getppid());
		sleep(15);
	}
	else
	{
		printf("hello i am parent with pid=%d\n", getpid());
		sleep(25);
	}
	printf("good morning\n-----\n");
	return;
}