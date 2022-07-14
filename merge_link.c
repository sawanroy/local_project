#include<stdio.h>
#include<stdlib.h>

struct node1
{
    int data;
    struct node1 next;
};

struct node2{
    int data2;
    struct node2 next2; 
}

struct node1 head1;
struct node2 head2;

int main(){

    int i=0,j=0;
    for(i=0;i<=5;i++)
    
    
}

void linklist1(int a){
    struct node1 *temp;
    struct node1 *link = (struct node1*)malloc(sizeof(struct node));

    link->data=a;
	link->next=NULL;
	if(head==NULL){
		head = link;
	}
	else{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=link;
				
	}


}

void linklist2(int a){

    struct node1 *temp;
    struct node1 *link = (struct node1*)malloc(sizeof(struct node));

    link->data=a;
	link->next=NULL;
	if(head==NULL){
		head = link;
	}
	else{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=link;
				
	}

}