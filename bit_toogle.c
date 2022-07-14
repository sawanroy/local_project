#include<stdio.h>

void main(){
    int val = 0x11223344;
    int i=0;
    printf("sizeof val - %d\n",4*sizeof(val));
    while (val<<i)
    {
      val=val^(1<<i);
      printf("i- ",i);
      i++;
    }
    printf("%x",val);
}
