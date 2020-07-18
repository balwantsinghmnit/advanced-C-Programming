#include<stdio.h>


void main()
{
	int x = 20,y = 40;
	int arr[5] = {7,2,5,9,1};
	int *p;
	// arr[i] = *(arr+i)
	//arr[2] = *(arr+2), assuming arr = 4080
	//arr[2] = *(4080+2*4) = *(4088) = 5
	printf("arr[2] = %d\n",arr[2]);
	printf("2[arr] = %d\n",2[arr]);
	p = arr+1;
	//can't do arr = arr+1
	printf("arr = %u *arr = %u\n",arr,*arr);
	printf("&arr[0] = %u\n",&arr[0]);
	printf("p = %u *p = %u\n",p,*p);
	printf("p[2] = %d\n",p[2] );


	return;
}
