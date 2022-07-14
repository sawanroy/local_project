#include<stdio.h>
// void bin(unsigned n)
// {
//     unsigned i;
//     for (i = 1 << 7; i > 0; i = i / 2)
//         (n & i) ? printf("1") : printf("0");
// }
int set_bit(int a,int m,int n)
{
    int local=((~((char)0)>>(sizeof((char)0)*8 - (m-n+1)))<<n);

    return local;
}
 
int main(void)
{

    int a[]={3,2,3,3};
    int n = sizeof(a)/sizeof(a[1]);

    printf("size %d",n);
    // bin(7);
    // printf("\n");
    // bin(4);
    // printf("\n");

   // int a=1*(6&2);
    //printf("%d",a);
    //int aa;

  //  printf("%d",set_bit(5,2,3));
}

int getsingle(int *a,int n){


}

