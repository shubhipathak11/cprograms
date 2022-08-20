int main()
{
	int num1={4,1,2};
	int num2={1,3,4,2};
	int n1=3,n2=4;
	int t[n1];
	int i,j;
	if(n1<=n2)
	{
		for(i=0;i<n1;i++)
		int temp=num1[i];
		{
			for(j=0;j<n2;j++)
			{
				if(num2[j]==temp)
					int idx=j;
				if(num2[idx]<num2[idx+1])
					t[i]=num2[idx+1];
				else
					t[i]=-1;
			}
		}
	}
	for(i=0;i<n1;i++)
	{
		printf("%d ",t[i]);
	}
	return 0;
}
