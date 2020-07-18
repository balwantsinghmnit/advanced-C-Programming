#include<stdio.h>
//error prone code

int gc=300;
static int h=10;

void funca()
{
	register int i=0;
	static int j=0;
	++i; ++j;
	printf("----in A----\n");
	printf("gc=%d adr=%u\n",gc,&gc);
	printf("i=%d adr=%u\n",i,&i);
	printf("j=%d adr=%u\n",j,&j);
	return;
}


void main()
{
	funca();
	funca();
	funca();
	return;
} 
