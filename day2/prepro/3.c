#include <stdio.h>
#include "data.h"
#undef TEMP
#define TEMP 1000

void main()
{
	int varx = 100;
	varx = varx + max_temp + TEMP + QEMP;
	printf("value = %d\n",TEMP);
	printf("varx = %d\n",varx);
	return;
}