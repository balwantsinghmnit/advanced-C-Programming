#include<stdio.h>
//application logic

void app(int (*protocol)(), char *input)
{
	int data;
	printf("logic for app\n");
	data = protocol(input);
	printf("my data being developed using data = %d\n",data);
	return;
}

int abc_protocol(char *data)
{
	int first = 0;
	int second = 0;
	int ret = 0;
	first = (int) data[0];
	second = (int) data[1];
	ret = first + second*2;
	printf("working with data as per abc protocol\n");
	return ret;
}

int def_protocol(char *data)
{
	int first = 0;
	int second = 0;
	int ret = 0;
	first = (int) data[0];
	second = (int) data[1];
	ret = first + second;
	printf("working with data as per def protocol\n");
	return ret;
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

	app(def_protocol,"world");

	return;
}