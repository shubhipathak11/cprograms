
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	char set[]={'a','b','c'};
	n=sizeof(set)/sizeof(set[0]);
	printf("Given Set :-- ");
	printf("{");
	for(i=0;i<n;i++)
		printf(" %c,",set[i]);
	printf("\b}");
	printf("\nPower Set of given set:- \n");
	for(i=0;i<pow(2,n);i++)
	{
		for(j=0;j<n;j++)
		{
			if(i&(1<<j))
				printf("%c",set[j]);
		}
		printf("\n");
	}
	return 0;
}

