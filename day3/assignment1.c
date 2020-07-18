#include<stdio.h>
#include<string.h>
#include<math.h>

/*
email ==>  mr.nigam@gmail.com
mobile ==> 9949999239
linkedin ==>  shobhit-nigam

*/

int bpos=0,cpos=0;

int finda(char s[100])
{
	if(s[0]=='x')
	{
		bpos=2;
		return 1;
	}
	else if(s[0]=='-' && s[1]=='x')
	{
		bpos=3;
		return(-1);
	}
	int i=0,a=0;
	//find a
	while(s[i]!='x')
	{
		if(s[i]!='-')
			a = a*10 + (s[i]-'0');
		i++;
	}
	//sign of a
	if(s[0]=='-')
		a *= -1;
	bpos=i+2;
	return a;
}

int findb(char s[100])
{
	if(s[bpos]=='-' && s[bpos+1]=='x')
	{
		cpos=bpos+2;
		return(-1);
	}
	else if(s[bpos]=='+' && s[bpos+1]=='x')
	{
		cpos = bpos+2;
		return(1);
	}
	int i=bpos,b=0;
	//find b
	while(s[i] != '\0' &&  s[i]!='x')
	{
		if(s[i]!='-' && s[i]!='+')
			b = b*10 + (s[i]-'0');
		i++;
	}
	if(s[i]!='x')
	{
		cpos=bpos;
		return 0;
	}
	//sign of b
	if(s[bpos]=='-')
		b *= -1;
	cpos=i+1;
	return b;
}

int findc(char s[100])
{
	int i=cpos,c=0;
	//find c
	while(s[i]!='\0')
	{
		if(s[i]!='-' && s[i]!='+')
			c = c*10 + (s[i]-'0');
		i++;
	}
	//sign of a
	if(s[cpos]=='-')
		c *= -1;
	return c;
}



void main()
{
	char s[100];
	printf("enter string\n");
	scanf("%s",s);
	int a=0,b=0,c=0,i=0;

	a = finda(s);
	b = findb(s);
	c = findc(s);

	printf("a = %d\nb = %d\nc = %d\n",a,b,c);

	//b2-4ac
	int b2_4ac = b*b-4*a*c;

	if(b2_4ac<0)
	{
		printf("b2-4ac = %d\n",b2_4ac);
	}
	else
	{
		float alpha = (-b+sqrt(b2_4ac))*1.0/(2*a);
		float beta =  (-b-sqrt(b2_4ac))*1.0/(2*a);
		printf("alpha = %0.1f\n",alpha);
		printf("beta = %0.1f\n",beta);
	}

	return;
}