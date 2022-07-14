
void func(){

    unsigned int i = 0x12345;
    char ch =(char)&i;
    if(*ch){
        printf("little endian");
    }
    else{
        printf("Big endian");
    }
}

// }

s =hello
char *Strdup ( char *s)
{ 
char *p = (char*)malloc(strlen(s)+1);
char *sc = p; // sc = 10;
While (*s) {
*p = *s;
p++;
s++;
}
*p="\0";
return sc; 
}

#include "stdio.h"
#include "string.h"
 
int main()
{
 char *p = "abc";
 strcpy(p, "def");
 printf("p is %s \n",p);
 return 0;
}

Replace 22 by 55 in below unsigned integer 0x11223344
Output should be 0x11553344 
 
Val = 0x11223344
Byte = 0x55
 
 
 
unsigned int f(unsigned int val, unsigned char byte)
{
    val=val&~(FF<<val)
    mask=0x00FF0000;


    mask=Byte&mask;
    mask=0x000000;
}

var = var|(1<<n);
var = var&~(1<<n);
var = var^(1<<n);


