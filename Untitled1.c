#include<stdio.h>
int main()
{
	int n,temp,sum=0,rem;
	printf("Enter a numeber : ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
			rem=n%10;
			sum=(sum*10)+rem;
			n=n/10;
	}
	if(sum==temp)
	{
		printf("Number is palindrome.");
	}
	else
	{	
		printf("Number is not palindrome");
	}
	return 0;

}
