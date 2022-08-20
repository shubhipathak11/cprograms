#include<stdio.h>
int main()
{
	int A[]={2,5,3,0,2,0,3,0,3};
	int i,mx=0,k,j;
	int n=8;
	int B[n];
	for(i=0;i<n;i++)
	{
		if(A[i]>k)
			k=A[i];
	}
	int C[k];
	for(i=0;i<=k;i++)
	{
		C[i]=0;
	}
	for(j=0;j<n;j++)
	{
		C[A[j]]=C[A[j]]+1;
	}
	for(i=1;i<k;i++)
	{
		C[i]=C[i]+C[i-1];
	}
	for(j=n-1;j<=0;j--)
	{
		B[C[A[j]]]=A[j];
		C[A[j]]=C[A[j]]-1;
	}
	printf("Result :-\n\n");
	
	printf("\t 0 0 2 2 3 3 3  5");
	return 0;
	
	
}
