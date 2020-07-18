#include<stdio.h>


void main()
{
	int bharath = 30;
	int atharva;
	int manoj = 10;  
	int tejaswini = 40;
	int *saptarshi;
	char ca = 100;
	char *ptr = &ca;
	saptarshi = &manoj;
	printf("size of ptr  = %u\n",sizeof(ptr));
	printf("size of saptarshi  = %u\n",sizeof(saptarshi));

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
