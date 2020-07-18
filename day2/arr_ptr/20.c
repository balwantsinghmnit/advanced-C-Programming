#include<stdio.h>


void main()
{
	int u=0,v=0,w=0,x=0,y=0,z=0;
	int arr[5] = {7,2,5,9,1};
	int* brr[5];
	int* p;
	int **q;
	int i = 0;
	p = arr;
	q = brr;

	for(i=0;i<5;i++)
		brr[i] = &arr[i];

	//horrible approach of programming
	//highly dependent of platform(compiler etc)
	u = *p***q;
	v = ++*p + ++**q;
	w = *p++ + **q++;
	x = ++*p++-++**q++;
	y = *p;
	z = **q;

	printf("u = %d\n v = %d\n w = %d\n",u,v,w);
	printf("x = %d\n y = %d\n z = %d\n",x,y,z);
	// for(i=0;i<5;i++)
	// {
	// 	printf("arr[%d]=%d\n",i,arr[i]);
	// }
	
	return;
}
