#include<stdio.h>
//error prone code

int g;
static int h=10;

void funca()
{
	int i;
	static int j;
	printf("----in A----\n");
	printf("g=%d adr=%u\n",g,&g);
	printf("i=%d adr=%u\n",i,&i);
	printf("j=%d adr=%u\n",j,&j);
	return;
}


void main()
{
	funca();
	return;
} 
