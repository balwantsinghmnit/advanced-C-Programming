#include<stdio.h>

int ga  = 100;
int gb = 200;
int gc=300;

void funca(int la,int lb)
{
	int gc=24;
	++gc;
	printf("-------starting A---------\n");
	printf("gc=%d adr=%u\n",gc,&gc);
	printf("-------ending A---------\n");
	return;
}

void funcb(int ta,int tb)
{
	gc=99;
	printf("-------starting B---------\n");
	printf("gc=%d adr=%u\n",gc,&gc);
	printf("-------ending B---------\n");
	return;
}


void main()
{
	int ma = 10,mb=12;

	funca(22,23);
	printf("in main gc = %d address=%u\n",gc,&gc);
	funcb(70,80);
	printf("in main gc = %d address=%u\n",gc,&gc);
	return;

} 
