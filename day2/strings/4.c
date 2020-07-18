#include<stdio.h>

void main()
{
	char ar[6] = {'h','e','l','l','o','\0'};
	char br[6] = {104,101,108,108,111,0};
	char cr[6] = "hello";
	char *dr = "hello";

	printf("adr of ar = %u\n",&ar);
	printf("adr of br = %u\n",&br);
	printf("adr of cr = %u\n",&cr);
	printf("adr of dr = %u\n",&dr);

	printf("adr where dr points to = %u\n", dr);
	// ar[0] = 'H';
	// // cr[0] = 'H';
	ar = "world";
	dr = "world";

	return;
}