//let's learn about signals
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void funca()
{
  printf("are bhai nhi rukhunga, kuch aur try kro\n");
}


void main()
{
    signal(SIGINT,funca);

   while(1)

{
   printf("ctrl + c se rok kr dikhao\n");
   sleep(1);

}}
