#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strdub(char *s){
    char *p = (char*)malloc(strlen(s) + 1);
    char *src = p;
    while(*s){
        *p = *s;
        s++; 
        p++;
    }

    printf("%x",*s);
    *p = '\0';
    printf("P- %s\n",src);
    return src;
}

int main(){
    char *str="Hello word!";
    printf("%s\n",strdub(str));

    return 0;
}
