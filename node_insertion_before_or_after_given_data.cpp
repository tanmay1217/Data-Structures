#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node 
{
	int data;
	struct node *next;
}*start=NULL;

struct node* create_list()
{
	struct node *newnode,*current;
	char ch;
	while(1)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\ndata part:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if (newnode == NULL)
		{
			printf("\n Memory error");
		}
		if (start == NULL)
		{
			start = newnode;
		}
		else
		{
			current->next = newnode;
		}
		current = newnode;
		printf("\nCHOICE:");
		ch=getche();
		if (ch=='n') break;
	}
	return start;
}
void display(struct node *start)
{
	struct node *ptr=start;
	if(start == NULL)
	{
		printf("\nLIST IS EMPTY\n");
	}
	while(ptr != NULL)
	{
		printf("%d  ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n\n");
}
void insert_node_before_after (struct node *start,int node,int insert,bool a)
{
	struct node *ptr=start,*prev,*newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=insert;
	newnode->next=NULL;
	
	if (start == NULL)
	{
		printf("LIST IS EMPTY \n");
		return;
	}
	if (a==0)
	{
		while(ptr != NULL && ptr->data != node)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		newnode->next=prev->next;
		prev->next = newnode;		
	}
	else if(a == 1)
	{
		while(ptr != NULL && ptr->data != node)
		{
			ptr=ptr->next;
		}
		newnode->next=ptr->next;
		ptr->next=newnode;
	}
	
	 
}

int main()
{	
	struct node * start;
	start= create_list();
	insert_node_before_after(start,5,4,false);
	display(start);
	insert_node_before_after(start,5,6,true);
	display(start);
}
