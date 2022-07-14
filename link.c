#include<stdio.h>
#include<stdlib.h>

int create (void);
void display();
void del_node();
void insert_begin();
void insert_end();
void insert_after_data();
void insert_before_data();
struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *link; 

int main(){
	int a;
	int opt;

	while (1)
	{
		printf("Enter the option \n");
		printf("1. create\n");
		printf("2. display\n");
		printf("3. insert at beginning\n");
		printf("4. insert at end\n");
		printf("5. intset after enterd node\n");
		printf("6. del node\n");
		printf("7. insert_before_data\n");
		scanf("%d",&opt);
		switch (opt)
		{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			insert_begin();
			break;
		case 4:
			insert_end();
			break;
		case 5:
			insert_after_data();
			break;
		case 6:
			del_node();		
			break;
		case 7:
			insert_before_data();
			break;
		default:
			printf("worng option\n");
			break;
		}
	}
	
	
}

int create()
{
	int a=0;
	printf("\nEnter the data");
	scanf("%d",&a);
	struct node *temp=head;
	link = (struct node*)malloc(sizeof(struct node));
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

void display(){
	struct node *temp=head;
	while (temp !=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
}

void del_node(){

	int da;
	printf("Enter the link data");
	scanf("%d",&da);
	struct node *temp=head;
	struct node *local;
	struct node *local2;
	{
		/* data */
	};
	
	if(temp==NULL)
	{
		printf("Empty linked list");
	}
	else
	{
		while (temp->data!=da)
		{
			local2=temp;
			temp=temp->next;
		}
		if(temp==head){
			head=temp->next;
			free(temp);
		}else{
			local=temp->next;
			free(temp);
			local2->next=local;
		}
		
			
	}

}

void insert_begin(){
	int da;
	printf("Enter the data");
	scanf("%d",&da);

	struct node *temp=head;
	link = (struct node*)malloc(sizeof(struct node));
	link->data=da;
	if(head==NULL)
	{
		head=link;
		link->next=NULL;
	}
	else
	{
		head=link;
		link->next=temp;
	}
	
	
}

void insert_end()
{
	int da;
	printf("Enter the data");
	scanf("%d",&da);
	struct node *temp=head;
	link = (struct node*)malloc(sizeof(struct node));
	
	link->data=da;
	link->next=NULL;
	printf("link");
	if(head==NULL)
	{
		head=link;
	}
	else{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=link;
		
	}
}
void insert_after_data(){
	int da;
	int dat;
	struct node *temp=head;
	link = (struct node*)malloc(sizeof(struct node));
	if(head==NULL){
		printf("Empty list\n");
		free(link);
	}
	else{
		display();
	printf("Enter the search data");
	scanf("%d",&da);
	printf("Enter the data :");
	scanf("%d",&dat);
	link->data=dat;
		while (temp->data!=da)
		{
			temp=temp->next;
		}
		if(temp->next==NULL){
			temp->next=link;
			link->next=NULL;
		}else
		{
			link->next=temp->next;
			temp->next=link;
		}
		

	}

}

void insert_before_data(){
	int da;
	int data;
	struct node *temp=head;
	struct node *local;
	link = (struct node*)malloc(sizeof(struct node));
	if(head==NULL){
		printf("Empty list\n");
		free(link);
	}
	else
	{
		display();
		printf("Enter the search data\n");
		scanf("%d",&da);
		printf("Enter the data\n");
		scanf("%d",&data);
		link->data=data;
		while (temp->data!=da)
		{
			local=temp;
			temp=temp->next;
		}
			local->next=link;
			link->next=temp;
			
	}			
}

