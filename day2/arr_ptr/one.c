#include<stdio.h>

void main()
{
	int bharath = 30;
	//movx loc1 #30
	int manoj;	//10
	int atharva;	//25
	
	atharva = bharath;
	// movx loc3 loc1
	atharva = &bharath;
	//movx loc3 &loc1
	return;
}
