#include<stdio.h>

void main()
{
	int x = 2,z=2;
	int y = 3;
	y = ++x * ++x * ++x;
	//((++x  * ++x) * ++x )
	y = ++z * ++z * ++z * ++z;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	return;
}
