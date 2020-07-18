#include<stdio.h>
#include<string.h>

void main()
{
	char ar[6] = {'h','e','l','l','o','\0'};
	char br[6] = {104,101,108,108,111,0};
	char cr[6] = "hello";
	char *dr = "hello";
	char *er;

	strcpy(cr,"world");
	printf("dr=%s\n",dr );
	printf("er=%s\n",er );
	dr="world";
	printf("dr=%s\n",dr );
	printf("er=%s\n",er );
	return;
}