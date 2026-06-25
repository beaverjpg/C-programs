#include<stdio.h>
#include<stdlib.h>
void search(int **a,int n, int k)
{
for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((*(*(a+j)+i))==k)
			{
				printf("Element Found");
				return;
			}
			else
			{
				continue;
			}
		}
		
	}
	printf("Element Not Found");	
}
int main()
{
	int n,k;
	printf("Size of the element & element to find:");
	
	scanf("%d%d",&n,&k);
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
	search(a,n,k);
	
	for(int i=0;i<n;i++)
	{
		free(a[i]);
	}
	free(a);
	a=NULL;
	return 0;
	}
