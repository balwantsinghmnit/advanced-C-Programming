#include<stdio.h>

void main()
{
	int bharath = 30;
	int manoj;	//10
	int atharva;	//25
	atharva = &bharath;
	printf("atharva = %u\n",atharva);
	printf("adr of bharath = %u\n",&bharath);
	return;
}
