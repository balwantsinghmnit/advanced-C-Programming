#include<stdio.h>
#include<string.h>

void main(int argc, char *argv[])
{
	int i = 0, sum=0;
	for(i=1;i<argc;i++)
	{
		sum += atoi(argv[i]);
		printf("%d + ",atoi(argv[i]));
	}
	printf("\b\b= %d\n",sum);
	return;
}