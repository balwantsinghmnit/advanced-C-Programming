#include<stdio.h>
#include<string.h>

void main(int argc, char *argv[])
{
	int i = 0;
	for(i=0;i<argc;i++)
	{
		printf("argv[%d] = %s\n",i,argv[i]);
	}
	return;
}