#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||i==n||j==0||j==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
/*if i implemented like 	for(int i=1;i<=n;i++)
	{
		for(i=1;i<=n;i++) 
		condition execution and statement execution
		in this loop by condition , the first loop get executed 2 times and the inner lop get executed 5 times 
		whereas by statement execuition 1st loop */
