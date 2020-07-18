#include<stdio.h>

/*
|	 | ==     = ===== =    =
|	 | =  =   =   =
|	 | =   =  =   =
|    | =    = =   =
 ----  =      = =====
*/

struct iunix
{
	int ia;
	int ib;
};

struct windows
{
	int ic;
	int id;
	struct windows *ptr;
};

void main()
{
	int x = 100;
	struct windows varx;
	struct windows vary;
	varx;		//windows
	varx.ic;	//int
	varx.ptr;	//windows pointer
	varx.ptr = &vary;
	varx.ptr = &varx;
	//self referential structure ==> can hold address of same structure type
	return;
}