#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//7 8 0 9 0 8 0
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			int temp=i;//3
			while(temp<n && arr[temp]==0)// 3->4->5
			{
				temp++;
				
			}
			if(temp<n)//8!=0
			{
			 int temp1=arr[temp];//[]=5
			 arr[temp]=arr[i];//5=0
			 arr[i]=temp1;//
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
