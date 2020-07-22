#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fd=0;
	printf("opening harvey for writing\n");
	fd = open("harvey", O_WRONLY);
	printf("going to write in harvey\n");
	write(fd, "i don't play the odds, I play the man", 38);
	printf("written in harvey, will exit now\n");
	sleep(1);
	close(fd);
	return;
}