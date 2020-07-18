#include<stdio.h>
#include<stdint.h>
void main()
{
	int8_t data = 20;
	//-128 to 127
	int varx = 2;
	int vary = 3;
	long carz = 30;
	char x = 'x';
	printf("sizeof = %d\n",sizeof(data) );
	printf("data= %d data= %u\n",sizeof(data),sizeof(data) );

	return 0;
}