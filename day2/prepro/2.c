#include <stdio.h>
//<> denotes std library file
#include "data.h"
#define TEMP 100

void main()
{
	int varx = 100;
	varx = varx + max_temp + TEMP;	//TEMP will replaced by 100
	printf("value = %d\n",TEMP);
	printf("varx = %d\n",varx);
	return;
}