#include<stdio.h>

int main()
{
    int n,i,flag=0;
    printf("Enter a number : \n");
    scanf("%d",&n);
    while(n!=1)
    {
    	for(i=2;i<=n/2;i++)
    	{
        	if(n%i==0)
        	{ 
            	flag++;
            	break;
        	}

    	}
    	if(flag==0)
        	printf("It is a prime number.");
    	else
        	printf("Number is not a prime ");
	}
	if(n==1)
		printf("Number is neither prime nor composite.")
    return 0;
}
