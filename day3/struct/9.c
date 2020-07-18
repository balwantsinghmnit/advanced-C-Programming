#include<stdio.h>

struct windows
{
	int ia;
	int ib;
	char ca[10];
	int *p;
};

void main()
{
	int x = 100;
	int *q;
	struct windows varx = {24,56,"hello",&x};
	struct windows vary;
	struct windows *ptr;
	
	ptr = &varx;

	//  varx.p is int pointer
	// *varx.p   int value
	//varx.ca    int const pointer, array
	//carx.ca[0]    char
	//ptr    windows structure pointer
	// ptr->ia   int value
	//*varx.p == *ptr->p

	printf("*varx.p = %d\n",*varx.p);
	printf("*varx.ca = %s\n",varx.ca);
	printf("*varx.ca[2] = %c\n",varx.ca[2]);
	printf("ptr->ca[2 = %c\n",ptr->ca[2]);
	return;
}