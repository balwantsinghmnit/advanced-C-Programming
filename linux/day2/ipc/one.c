#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>

void main()
{
	int key=0; 	int id=0;
	key = ftok("/bin" , 20);
	printf("key=%u\n", key);
	return;
}