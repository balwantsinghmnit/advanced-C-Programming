#include<stdio.h>


void main()
{
	int x = 20,y = 40;
	int arr[5] = {7,2,5,9,1};
	int *p;
	int i = 0;
	p = arr;
	for(i=0;i<8;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	for(i=0;i<8;i++)
	{
		printf("p[%d] = %d\n",i,p[i]);
	}


	return;
}
