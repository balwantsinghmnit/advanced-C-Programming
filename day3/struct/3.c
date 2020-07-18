#include<stdio.h>

struct windows
{
	char cc;
	int ia;
	int ib;
	char ca;
	int ic;
};

void main()
{
	int x = 100;
	struct windows varx = {20,30,'c'};
	struct windows vary;

	printf("adr of varx = %u\n",&varx);
	printf("adr of vary = %u\n",&vary);
	printf("size of varx = %ld\n",sizeof(varx));
	printf("size of vary = %ld\n",sizeof(vary));

	// varx.ia = x;
	// ++varx.ia;
	// vary = varx;
	// printf("vary.ib = %d\n",vary.ib);
	return;
}