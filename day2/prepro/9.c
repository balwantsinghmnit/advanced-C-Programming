//conditional compilation happens before compilation
#include <stdio.h>
#include "data.h"
void funca();

void main()
{
	#if TEMP > 100
		printf("monday\n");
		printf("tuesday\n");
	#endif
	funca();
	#if TEMP > 200
		printf("wednesday\n");
		printf("thursday\n");
	#endif
	#ifdef TEMP
		printf("friday\n");
	#endif
	return;
}

void funca()
{
	#undef TEMP
	#define TEMP 300
}