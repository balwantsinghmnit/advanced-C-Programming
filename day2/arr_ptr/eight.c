#include<stdio.h>


void main()
{
	int bharath = 30;
	int atharva;
	int manoj = 10;  
	int tejaswini = 40;
	int saptarshi = 40;
	saptarshi = ++manoj;
	printf("adr of bharath = %u\n",&bharath);
	printf("adr of atharva = %u\n",&atharva);
//	printf("adr of manoj = %u\n",&manoj);
	printf("adr of tejaswini = %u\n",&tejaswini);
	printf("adr of saptarshi = %u\n",&saptarshi);

/*	atharva = &bharath;
	manoj = 25;
	printf("atharva = %u\n",atharva);
	printf("adr of bharath = %u\n",&bharath);
	printf("*atharva = %d\n",*atharva);

	printf("&manoj = %u\n",&manoj);
	printf("manoj = %u\n",manoj);
	printf("*manoj = %d\n",*manoj);*/
	return;
}
