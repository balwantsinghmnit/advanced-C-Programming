#include<stdio.h>


void main()
{
	int x = 20,y = 40;
	int arr[5] = {7,2,5,9,1};
	int* brr[5];
	int* p;
	int **q;
	int i = 0;
	p = &x;
	q = &p;

				// p holds an address
				// *p is value
				//q holds an address of pointer
				//*q holds an address
				//**q is value

	printf("x = %d adr of x = %u\n",x,&x);
	printf("p = %u adr of p = %u *p = %d\n",p,&p,*p);
	printf("q = %u adr of q = %u *q = %u **q = %d\n",q,&q,*q,**q);
	
	return;
}
