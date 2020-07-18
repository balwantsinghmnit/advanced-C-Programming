#include <stdio.h>
//#pragma is not in c , it is dependent on compiler
void funca();
#pragma GCC poison funca
//due to poison , can't use funca

void main()
{
	printf("in main\n");
	funca();
	return;
}

void funca()
{
	printf("in func A\n");
	return;
}