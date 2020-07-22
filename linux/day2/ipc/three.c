#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct msgbuf
{
	long mtype;
	char mtext[40];
};
void main()
{
	int key=0; 	int id=0;
	struct msgbuf vara;
	key = ftok("/bin" , 25);
	id = msgget(key, IPC_CREAT|0666);
	perror("msgget ");
	printf("enter the msg & mtype\n");
	scanf("%ld", &vara.mtype);
	scanf("%s", vara.mtext);
	msgsnd(id, (struct msgbuf *) &vara, sizeof(vara), 0);
	perror("msgsnd ");
	printf("msg sent\n");
	return;
}