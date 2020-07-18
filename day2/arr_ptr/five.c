#include<stdio.h>
int *manoj;  //10

void main()
{
	int bharath = 30;
	int *atharva;	//25
	atharva = &bharath;
	manoj = 25;
	printf("atharva = %u\n",atharva);
	printf("adr of bharath = %u\n",&bharath);
	printf("*atharva = %d\n",*atharva);

	printf("&manoj = %u\n",&manoj);
	printf("manoj = %u\n",manoj);
	printf("*manoj = %d\n",*manoj);
	return;
}
