#include<stdio.h>
#include<string.h>
 
char *get_string() {
    char str[20];
    strcpy(str,"Some string..");
    return str;
}
 
int main () {
printf("%s", get_string());
return 0;
}

struct node
{
    int data;
    struct node *pre;
    struct node *next;
    
};


void detect_li(struct *node head ){

    struct node *temp=head;

    while (temp!=NULL);
    {
        temp=temp->next;
        if(temp==head)
        {
            printf("circular");
            exit(1);
        }
    }   


}

void detect(struct *node head){

    struct node *temp=head;
    if(temp->next->pre==NULL)
    {
        while (temp!=NULL)
        {
            temp->next->pre=temp;
            temp=temp->next;
        }
    }
    else
    {
        printf("Doub linklist");
    }
}


#include<pthread.h>

pthread_t th0;

int num;


int main(){
    pthread_create(&th0,NULL,even,NULL);
    pthread_create();
}

int even(){

}
//////////////////////////////////////////////////////



int add(int a,int b){

}
int subs(int a,int b){

}
int multi(int a,int b){

}
int div(int a,int b){

}

int main(){
    void (*operation[])(int int) = {add,subs,multi,div}

    printf("enter choice ");
    scanf("%d",opt);
    int a=5; int b=9;
    (*operation[opt])(a,b);



}

int *ptr;
int *ptr1;

ptr = ptr1;

ptr=NULL;




