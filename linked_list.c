#include<stdio.h>

struct node
{
	int data;
	struct node *next;
};
int create(int data)
{
	struct node *head
	head=(struct node *)malloc(sizeof(struct node));
	printf("Enter the node :");
	printf("Data :");
	scanf("%d",&head->data);
	
}
