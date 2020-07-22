#include<stdio.h>
#include<unistd.h>

void main()
{
	printf("namaste\n");
	fork();
	printf("hello i am %d and my parent is %d\n",getpid(),getppid());
	printf("good morning\n");
	//---------
	//-----
	//-----
	//------
	sleep(10);
	return;
}