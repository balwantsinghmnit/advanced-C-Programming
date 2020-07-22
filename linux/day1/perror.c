#include<stdio.h>
#include<unistd.h>

void main()
{
  if(unlink("hello.txt")==-1)
  {
     perror("");
   }
}
