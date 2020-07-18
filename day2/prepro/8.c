//conditional compilation
#include <stdio.h>
#include "data.h"

void main()
{
	#if TEMP > 200
		printf("sunday session is on\n");
		//some code
		printf("apart from saturday\n");
	#elif TEMP < 200
		printf("next sunday session is on\n");
		//some code
		printf("apart from next saturday\n");
	#else
		printf("temp is 200\n");
	#endif

	return;
}