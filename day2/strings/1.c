#include<stdio.h>

void main()
{
	char ar[6] = {'h','e','l','l','o'};
	signed char cs = -93;
	unsigned char uc = 163;
	short int si = -32736;	//-32768 to 32767
	unsigned short int ui = 32800; //0 to 65536
	printf("%hi\n",si);
	printf("%hu\n",si);
	printf("%hi\n",ui);
	printf("%hu\n",ui);
}