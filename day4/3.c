#include<stdio.h>
int ga = 0;

void funca(void)
{
	for(float x=0.1f;x<=1.0f;x=x+0.1f)
	{
		ga += 1;
	}
	return;
}

void main()
{
	printf("ga = %d\n",ga);
	funca();
	printf("ga = %d\n",ga);
	return;
}