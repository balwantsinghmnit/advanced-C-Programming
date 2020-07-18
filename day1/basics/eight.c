#include<stdio.h>

void funca(int la,int lb)
{
	printf("la=%d\n",la);
	printf("lb=%d\n",lb);
	return;	
}

void main()
{
	int ma=10;
	funca(++ma,ma++);
	printf("ma=%d\n",ma);
	return;
}
