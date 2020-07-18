#include<stdio.h>

void abc_protocol(char *data)
{
	printf("working with data as per abc protocol\n");
	return;
}

void def_protocol(char *data)
{
	printf("working with data as per def protocol\n");
	return;
}

void geh_protocol(int x)
{
	printf("dataless protocol, x = %d\n",x);
	return;
}

void main()
{
	//declaration of function pointer
	void (*fptr)(int);
	int *ptr;
	char *(*qtr)(int,int,char);
	fptr = geh_protocol;
	fptr(20);

	return;
}