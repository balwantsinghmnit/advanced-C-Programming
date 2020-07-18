#include<stdio.h>

struct windows
{
	unsigned int room : 4;
	unsigned int ib : 3;
	unsigned int ca : 1;
};

void main()
{
	int x = 100;
	struct windows varx;
	struct windows vary;
	varx.room = 13;

	printf("size of varx = %ld\n",sizeof(varx));

	return;
}