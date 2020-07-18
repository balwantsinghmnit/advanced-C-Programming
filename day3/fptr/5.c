#include<stdio.h>
//application logic

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
	void (*fptra)(int);
	void (*fptrb)(char *);
	void (*ptr[4])(int);

	ptr[0] = geh_protocol;
	ptr[0](80);
	fptra = geh_protocol;
	fptra(20);
	fptrb = def_protocol;
	fptrb("hello");

	return;
}