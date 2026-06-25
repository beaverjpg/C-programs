#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<n;i++)
	{
		int a=arr[i];
		if(i==n-1) break;
		if(a+1==arr[i+1])
		continue;
		else{
		
		printf("the missing value is %d",a+1);
		break;}
	}
}
