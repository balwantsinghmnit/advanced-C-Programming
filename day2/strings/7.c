#include<stdio.h>
#include<string.h>

void main()
{
	char c[99] = "%d";
	char d[100] = "%c";
	c[1] = 'c';
	d[1] = 'd';
	printf(c,100);
	printf(d,99);
}