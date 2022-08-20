// Difference of two sets

#include<stdio.h>
int main(){
	int i,j,m,n,flag=0;
	printf("Enter the size of set A : \n");
	scanf("%d",&m);
	int a[m];
	printf("Enter the size of set B : \n");
	scanf("%d",&n);
	int b[n];
	printf("Enter the elements in Set A :-\n");
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	printf("Enter the elements in Set B :-\n");
	for(j=0;j<n;j++)
		scanf("%d",&b[j]);
	printf("Difference of A-B is :-\n");
	for(i=0;i<m;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",a[i]);
	}
	printf("\nDifference of B-A is :-\n");
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",b[i]);
	}
	return 0;

	
}
