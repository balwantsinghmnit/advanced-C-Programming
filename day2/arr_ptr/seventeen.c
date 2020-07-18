#include <stdio.h>

void funca(){
	char arr[13];
	gets(arr);
	printf("arr = %s\n",arr);
	return;
}

void main()
{
	funca();
	printf("back to main\n");
	return;
}