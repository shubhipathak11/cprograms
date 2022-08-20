#include<stdio.h>
#define N 5
int s1[5],s2[5];
int top1=-1,top2=-1;
int count=0;
void enqueue(int x)
{
	push1(x);
	count++;
}

void push1(int data)
{
	if(top1==N-1)
		printf("\nOverflow.");
	else
	{
		top1++;
		s1[top1]=data;
	}
}

int pop1()
{
	if(top1==-1)
	{
		printf("\nUnderflow.");
	}
	else
	{
		int a=s1[top1];
		top1--;
		return a;
	}
}

void push2(int data)
{
	if(top2==N-1)
		printf("\nOverflow");
	else
	{
		top2++;
		s2[top2]=data;
	}	
}

void dequeue()
{
	if(top1==-1 && top2==-1)
	{
		printf("Queue is empty.");
	}
	else
	{
		int a,b,i;
		for(i=0;i<count;i++)
		{
			a=pop1();
			push2(a);
		}
		b=pop2();
		printf("Dequeued element : ");
		count--;
		for(i=0;i<count;i++)
		{
			a=pop2();
			push(a);
		}
	}
}
void display()  
{  
   for(int i=0;i<=top1;i++)  
  {  
     printf("%d , ", s1[i]);  
  }  
}  

int pop2()  
{  
   int b=s2[top2];  
   top2--;  
   return b;  
}  
int main()
{
	enqueue(5);
	enqueue(2);
	enqueue(1);
	dequeue();
	enqueue(7);
	display();
	return 0;
 } 
