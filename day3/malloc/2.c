#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char ar[10] = "hello you";
	int n=0,i=0;
	int *ptr;

	printf("ar=%s\n",ar);
	//array of pointera
	memset(ar+3,100,4*sizeof(char));
	printf("ar=%s\n",ar);
	printf("\n");

	return;
}