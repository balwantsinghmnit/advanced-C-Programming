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
		sleep(7);
		read(pd[0], buf, 6);
		printf("child read data again = %s\n", buf);

	}	
	else
	{
		sleep(1);
		printf("parent will write\n");
		write(pd[1], "wonder woman", 12);
		printf("parent has written adn will sleep\n");
		sleep(15);
	}
}