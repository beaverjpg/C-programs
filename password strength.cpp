#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void strength(int **a,int n,int m)
{ 
  int max1=INT_MIN,max2=INT_MIN;
  for(int i=0;i<n;i++)
	{    int sum1=0;
		for(int j=0;j<m;j++)
		{
			sum1+=*(*(a+i)+j);
		}
		printf("%d ",sum1);
		if(sum1>max1)
		{
			max1=sum1;
		}
	}
	printf("\n%d\n",max1);
	 for(int i=0;i<m;i++)
	{    int sum2=0;
		for(int j=0;j<n;j++)
		{
			sum2+=*(*(a+j)+i);
		}
		printf("%d ",sum2);
		if(sum2>max2)
		{
			max2=sum2;
		}
	}
	printf("\n%d\n",max2);
	printf("The result is %d ",max1>max2?max1:max2);
}
int main()
{
	int n,m;
	printf("Size of Row and Column:");
	scanf("%d%d",&n,&m);
	int  **a=(int**)malloc(sizeof(int*)*n);
	for(int i=0;i<n;i++)
	{
		*(a+i)=(int*)malloc(sizeof(int)*m);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	printf("The Matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",*(*(a+i)+j));
		}
		printf("\n");
	}
	strength(a,n,m);
	
}
