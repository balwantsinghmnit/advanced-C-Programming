#include<stdio.h>

void funca(int la,int lb)
{
	printf("la=%d\n",la);
	printf("lb=%d\n",lb);
	return;	
}

void main()
{
	int ma=322;
	char ca = 'A';
	ca = (char)ma;
	printf("ca=%d\n",ca);
	printf("ca=%c\n",ca);
	ma = (int)ca;
	printf("ma=%d\n",ma);
	printf("ma=%c\n",ma);
	return;
}
