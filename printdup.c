#include<stdio.h>
int main()
{
	
	int A[]={1,5,10,20,40,80};
	int B[]={6,7,20,80,100};
	int C[]={3,4,15,20,30,70,80,120};
	int n1=sizeof(A)/sizeof(A[0]);
	int n2=sizeof(B)/sizeof(B[0]);
	int n3=sizeof(C)/sizeof(C[0]);
	int i,j,x;
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
				for(x=0;x<n3;x++)
				{
					if((C[x]==B[j]) && (B[j]==A[i]))
						printf("%d ",A[i]);
				}
		
		}
	}
	

	return 0;
}
