#include<stdio.h>


void main()
{
	int x = 20,y = 40;
	int arr[5] = {7,2,5,9,1};
	int const * p = &x;
	printf("p = %u *p = %u\n",p,*p);	
	++(*p);
	printf("p = %u *p = %u\n",p,*p);	
	printf("x = %d\n",x);	

//	printf("size of p  = %u\n",sizeof(p));

	return;
}
