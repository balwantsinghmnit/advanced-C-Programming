#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fd=0;
	static char buf[200];
	printf("opening harvey for reading from it\n");
	fd = open("harvey", O_RDONLY);
	printf("going to read from harvey\n");
	read(fd, buf, 30);
	printf("read data is --> %s\n", buf);
	close(fd);
	return;
}