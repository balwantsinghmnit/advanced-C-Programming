#include<stdio.h>

struct unix
{
	int ia;
	int ib;
} varu;

struct ilinux
{	
	int ic;
	int id;
	struct unix varv;
}varl;

struct andriod
{
	int ie;
	int ig;
	struct unix varw;
	struct ilinux varm;
}vara;

void main()
{
	varu;		//unix
	varu.ia;	//int
	varu.ib;	//int
	varl;		//ilinux
	varl.ic;	//int
	varl.id;	//int
	varl.varv;	//unix		"varv_is_not_unix"
	varl.varv.ia;	//int
	return;
}