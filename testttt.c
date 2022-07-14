#include "stdio.h"
#include "string.h"
 
int main()
{
//  char *p = "abc";
//  strcpy(p, "def");
//  printf("p is %s \n",p);
//  return 0;

unsigned int val= 0x11223344;
unsigned int b=0x55;

val=val&~(0xFF<<16);

val=val|(b<<16);


printf("%x",val);
}