#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fd=0;
	static char buf[20];
	fd = open("linux", O_WRONLY);
	perror("open");
		// status of latest sys call
	read(fd, buf, 8);
	perror("read");
	printf("fd=%d\n", fd);
}