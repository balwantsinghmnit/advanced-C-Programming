#include<stdio.h>


void main()
{
	int x = 20,y = 40;
	int arr[5] = {7,2,5,9,1};
	int* brr[5];
	int* p;
	int i = 0;
	p = arr;
	for(i=0;i<12;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	for(i=0;i<12;i++)
	{
		printf("brr[%d] = %d\n",i,brr[i]);
	}


	return;
}
