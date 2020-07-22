#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main(){
	printf("i am 8 , my pid=%d, my parent=%d\n", getpid(), getppid());
	system("./1");
	sleep(20);
	return;
}