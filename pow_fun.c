#include<stdio.h>

int main()
//{
//	int i,n=10,pow=1,x=2;
//	for(i=0;i<n;i++)
//	{
//		pow=pow*x;
//	}
//	printf("%d",pow);
//	return 0;
//}
{
	int a=2,n=10,res=1;
	while(n>0)
	{
		if(n%2==1)
		{
			res=res*a;
			n=n-1;
		}
		else
		{
			a=a*a;
			n=n/2;
		}
	}
	printf("%d",res);
	return 0;
}

