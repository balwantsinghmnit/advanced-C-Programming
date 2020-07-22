 
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int pd[2];	int i=0;
	static char buf[20];
	pipe(pd);
	i = fork();
	if (i==0)
	{
		printf("the child will read data from pipe\n");
		read(pd[0], buf, 6);
		printf("child read data is %s\n", buf);
	}	
	else
	{
		sleep(10);
		printf("parent will write\n");
		write(pd[1], "wonder woman", 11);
		printf("parent has written\n");
	}
}