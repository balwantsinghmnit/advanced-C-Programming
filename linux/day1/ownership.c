#include<stdio.h>
#include<unistd.h>

void main()
{
  printf("ownership : %d\n",getuid());
  return;
}
