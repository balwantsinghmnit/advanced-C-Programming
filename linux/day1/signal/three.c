#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void funca()
{
	printf("handles the signal, no big deal\n");
	return;
}

void funcb()
{
	printf("talk to my hand\n");
	return;
}

void main()
{
	int i=0,pid=0;
	signal(SIGTERM,funca);  // can be handled
	signal(SIGINT,funcb);  // can be handled  ctrl+c
	signal(SIGKILL,funcb);  // can not be handled
	//ctrl + z SIGSTOP
	//ctrl + \   SIGQUIT
	pid = getpid();
	for(i=0;10;i++)
	{	
		printf("%d running since %d secs\n",pid,i);
		sleep(1);
	}
	return;
}