//traffic

#include<stdio.h>
#include<unistd.h>

void light1(int line1,int line2,int line3,int line4)
{
		printf(" =========================================================\n");
		printf("|                                                         |\n");
		printf("|                    line1 green                          |\n");
		printf("|                                                         |\n");
		printf(" =========================================================\n");
	for(int i=0;i<10;i++)
	{
		printf("line1 green: %d line2 red : %d line3 red : %d line4 red : %d\n\n",line1--,line2--,line3--,line4--);	
		sleep(1);		
	}
}

void light2(int line1,int line2,int line3,int line4)
{

		printf(" =========================================================\n");
		printf("|                                                         |\n");
		printf("|                    line2 green                          |\n");
		printf("|                                                         |\n");
		printf(" =========================================================\n");
	
	for(int i=0;i<10;i++)
	{
		printf("line1 red : %d line2 green : %d line3 red : %d line4 red : %d\n\n",line1--,line2--,line3--,line4--);	
		sleep(1);		
	}
}

void light3(int line1,int line2,int line3,int line4)
{

		printf(" =========================================================\n");
		printf("|                                                         |\n");
		printf("|                    line3 green                          |\n");
		printf("|                                                         |\n");
		printf(" =========================================================\n");
	
	for(int i=0;i<10;i++)
	{
		printf("line1 red : %d line2 red : %d line3 green : %d line4 red : %d\n\n",line1--,line2--,line3--,line4--);	
		sleep(1);		
	}
}

void light4(int line1,int line2,int line3,int line4)
{

		printf(" =========================================================\n");
		printf("|                                                         |\n");
		printf("|                    line4 green                          |\n");
		printf("|                                                         |\n");
		printf(" =========================================================\n");
	
	for(int i=0;i<10;i++)
	{
		printf("line1 red : %d line2 red : %d line3 red : %d line4 green : %d\n\n",line1--,line2--,line3--,line4--);	
		sleep(1);		
	}
}


void main()
{
	int line1=10,line2=30,line3=20,line4=10;

	while(1)
	{
		light1(10,30,20,10);
		light4(30,20,10,10);
		light3(20,10,10,30);
		light2(10,10,30,20);
	}
}