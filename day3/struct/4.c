#include<stdio.h>
/*
	---------
	|		|
	|		|
  ---------------
  |				|
  |				|
  |		water	|
  |		milk	|
  |		oil		|
  |		example |
  ---------------

*/

struct windows
{
	char cc;
	int ia;
	int ib;
	char ca;
	int ic;
	double da;
};

struct ilinux
{
	//large first
	double da;
	int ia;
	int ib;
	int ic;
	char cc;
	char ca;
};

void main()
{
	int x = 100;
	struct windows varx = {20,30,'c'};
	struct ilinux vary;

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