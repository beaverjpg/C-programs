#include<stdio.h>
int main()
{
	int n,j=0;
	scanf("%d",&n);
	int arr[n];
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)// 7 0 9 0 8
		{
			arr1[j]=arr[i];
			printf("%d",arr1[j]);//7 9 8 
			j++;//3count++;//2
		}
		
		
	}
	printf("%d",j);
	for(int i=j;i<n;i++)
	{
	 arr1[i]=0;
		printf("%d",arr1[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr1[i]);
	}
}
