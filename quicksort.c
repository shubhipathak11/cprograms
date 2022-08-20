#include<stdio.h>
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
}

int Quicksort(int A[],int p,int r)
{
	if(p<r)
	{
		int q=Partition(A,p,r);
		Quicksort(A,p,q-1);
		Quicksort(A,q-1,r);
	}
	return 0;
}
int Partition(int A[],int p,int r)
{
	int j;
	int x=A[r];
	int i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(A[j]<=x)
		{
			i=i+1;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}

int main()
{
	int A[]={5,3,2,1,0};

	int i,p=1,r=5;
	int res=Quicksort(A,p,r);
	printf("\nSorted Array : \n");
	for(i=1;i<=5;i++)
	{
		printf("%d",res);
	}
	return 0;
	
}
