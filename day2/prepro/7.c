//conditional compilation
#include <stdio.h>
#include "data.h"

void main()
{
	#ifdef TEMP
		printf("sunday session is on\n");
		//some code
		printf("apart from saturday\n");
	#endif

	#ifndef XEMP
		printf("next sunday session is on\n");
		//some code
		printf("apart from next saturday\n");
	#endif

	return;
}