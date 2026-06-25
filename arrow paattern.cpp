#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int mid=(n/2)+1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==(n/2)+1||j==mid-i+1||j==i-mid+1)
			{
			  printf("* ");
			}
		    
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
}
