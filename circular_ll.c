#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;

void EnQueue(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=newnode;
		front->next=front;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
}

void DeQueue()
{
	struct node *temp;
	temp=front;
	if(front==0)
	{
		printf("\nUnderflow...\n");
	}
	else
	{	printf("\nDeleted element is : ");
		front=front->next;
		rear->next=front;
		printf("%d ",temp->data);
		free(temp);
	}
}

void Display()
{
	struct node *temp;
	temp=front;
	if(front==NULL && rear==NULL)
	{
		printf("\nEmpty Queue\n");
	}

	else
	{
		printf("\n\nQueue Elements are : ");
		while(temp->next!=front)
		{
			printf(" %d ",temp->data);
			temp=temp->next;
		}
		printf("%d ",temp->data);
	}
}

int main()
{
	int ch,value;
	do
	{
		printf("\n\n\n************* MAIN MENU *************\n");
		printf("\n1.INSERTION IN CIRCULAR QUEUE.");
		printf("\n2.DELETION IN CIRCULAR QUEUE.");
		printf("\n3.DISPLAY THE QUEUE.");
		printf("\n4.EXIT THE PROGRAM.");
		printf("\nENTER YOUR CHOICE (1-4) : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("\nEnter the element you want to insert : ");
				 	 scanf("%d",&value);
				 	 EnQueue(value);
				 	 break;
			case 2 : DeQueue();
					 break;
			case 3 : Display();
					 break;
			case 4 : exit(0);
		   default : printf("\nWrong choice!!!!!.........\n");
		   	   		 break;
		}
	}while(ch!=4);
	return 0;
}
