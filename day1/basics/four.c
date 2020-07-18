#include<stdio.h>
#include<stdint.h>
void main()
{
	uint8_t data = 260;
	//-128 to 127
	auto signed long int varx = 2;
	int vary = 3;
	long carz = 30;
	char x = 'x';
	printf("sizeof = %d\n",sizeof(data) );
	printf("data= %d data= %u\n",data,data );

	return 0;
}