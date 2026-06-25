#include<stdio.h>
#include<stdlib.h>
int main()
{   int n;
    scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
	int *temp=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		temp[(i+k)%n]=a[i];// any question with kth rotation have this formula
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",temp[i]);
	}
	free(temp);
	temp=NULL;
	free(a);
	temp=NULL;
	
	
}
