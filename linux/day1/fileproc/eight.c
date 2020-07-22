#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int pid=0,fd=0;	//fd = file descriptor
	static char buf[20];
	fd = open("newquotes.txt",O_WRONLY|O_CREAT,0666);
	printf("fd for newquotes.txt is %d\n",fd);
	read(0,buf,14);
	printf("read data = %s\n",buf);
	write(fd,buf,6);
	write(fd,"\nhello\n",7);
	close(fd);
	return;
}