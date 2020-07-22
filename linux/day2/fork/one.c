#include<stdio.h>
#include<unistd.h>

void main()
{
	printf("namaste\n");
	fork();
	printf("hello i am %d\n", getpid());
	printf("good morning\n-----\n");
	return;
}