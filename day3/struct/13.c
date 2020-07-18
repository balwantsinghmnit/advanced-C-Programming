#include<stdio.h>

struct myunix
{
	int ia;
	int ib;
} varu;

struct ilinux
{	
	int ic;
	int id;
	struct myunix varv;
}varl;

struct android
{
	int ie;
	int ig;
	struct myunix varw;
	struct ilinux varm;
}vara;

void main()
{
	varu;		//myunix
	varu.ia;	//int
	varu.ib;	//int
	varl;		//ilinux
	varl.ic;	//int
	varl.id;	//int
	varl.varv;	//myunix		"varv_is_not_myunix"
	varl.varv.ia;	//int
	vara;		//android
	vara.ie;	//int
	vara.varw;		//myunix
	vara.varw.ia;	//int
	vara.varm;		//ilinux
	vara.varm.ic;	//int
	vara.varm.varv;	//myunix
	vara.varm.varv.ia;	//int

	printf("size of vara = %d\n",sizeof(vara));
	printf("size of varu = %d\n",sizeof(varu));
	printf("size of varl = %d\n",sizeof(varl));

	return;
}