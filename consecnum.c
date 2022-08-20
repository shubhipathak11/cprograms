//print("Hello world")
#include<stdio.h>
int main()
{
	int a,b,s=0,flag=0,i,n;
	printf("Enter a number : ");
	scanf("%d",&a);
	for(i=1;i<1000;i++)
	{
		for(n=1;n<10;n++)
		{
			b=((n+1)*i)+(n*(n+1))/2;
        	if(a==b)
            {
				s=i+n;
            	printf("%d is the sum of numbers from %d to %d",a,i,s);
            	flag=1;
        	}
		}
	}

	if(flag==0)
	{
    	printf("%d is not a sum of any consecutive numbers",a);
	}
	return 0;
}
