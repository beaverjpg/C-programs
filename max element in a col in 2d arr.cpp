#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void sum_of_col(int **a,int n)
{   int max=INT_MIN;
	for(int i=0;i<n;i++)
	{   
		for(int j=0;j<n;j++)
		{
		  if(max<(*(*(a+j)+i)))
		  {
		  	max=(*(*(a+j)+i));
		  }
		}
		printf("%d",max);
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Size of the element:");
	scanf("%d",&n);
	int **a=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
	{
		*(a+i)=(int*)malloc(n*sizeof(int));
	}
	printf("The Matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",*(a+i)+j);//can also use &a[i][j];
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",*(*(a+i)+j));//can also use a[i][j];
		}
		printf("\n");
	}
	sum_of_col(a,n);
	}
