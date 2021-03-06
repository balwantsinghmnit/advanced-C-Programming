#include<stdio.h>
#include<string.h>
#include<math.h>

//variables to hold starting position of b & c 
// in ax2+bx+c 
int bpos=0,cpos=0;

//function to check for character
int isChar(char c)
{
	if( (c>='A' && c<='Z') || (c>='a' && c<='z') )
		return 1;
	return 0;
}

//function to find a
int finda(char s[100])
{
	//if a is +1
	if(isChar(s[0]))
	{
		bpos=2;
		return 1;
	}
	//if a is -1
	else if(s[0]=='-' && isChar(s[1]))
	{
		bpos=3;
		return(-1);
	}
	//otherwise
	int i=0,a=0;
	//find a
	while(!isChar(s[i]))
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

//function to find b
int findb(char s[100])
{
	//if b is -1
	if(s[bpos]=='-' && isChar(s[bpos+1]))
	{
		cpos=bpos+2;
		return(-1);
	}
	//if b is +1
	else if(s[bpos]=='+' && isChar(s[bpos+1]))
	{
		cpos = bpos+2;
		return(1);
	}
	//otherwise
	int i=bpos,b=0;
	//find b
	while(s[i] != '\0' &&  !isChar(s[i]))
	{
		if(s[i]!='-' && s[i]!='+')
			b = b*10 + (s[i]-'0');
		i++;
	}
	//when b is 0 ==> ax2+c
	if(!isChar(s[i]))
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

//function to find c
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
	//sign of c
	if(s[cpos]=='-')
		c *= -1;
	return c;
}


void main()
{
	char s[100];
	printf("enter string\n");
	scanf("%s",s);
	int a=0,b=0,c=0,i=0;	//a,b & c are coeffs in ax2+bx+c

	a = finda(s);
	b = findb(s);
	c = findc(s);

	printf("a = %d\nb = %d\nc = %d\n",a,b,c);

	//find b2-4ac
	int b2_4ac = b*b-4*a*c;

	//if roots are not real
	if(b2_4ac<0)
	{
		printf("Imaginatory Roots. Printing b2-4ac = %d\n",b2_4ac);
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