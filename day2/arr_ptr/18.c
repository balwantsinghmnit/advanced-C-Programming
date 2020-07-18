#include<stdio.h>


void main()
{
	int x = 20,y = 40;
	int arr[5] = {7,2,5,9,1};
	int* brr[5];
	int* p;
	int i = 0;
	p = &x;

	for(i=0;i<5;i++)
		brr[i] = &arr[i];

	for(i=0;i<5;i++)
	{
		printf("brr[%d] = %u *brr[%d] = %d\n",i,brr[i],i,*brr[i]);
//		printf("brr[%d] = %u\n",i,brr[i]);
	}
	
	return;
}
