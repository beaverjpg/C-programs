#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=1;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{ 
		   printf("%d %d", i , n/i);
			sum+=i;
			sum+=(n/i);
			printf("\n");
		}
	}
	if(sum==n)
	{
		printf("it is a perfect number");
		
	}
	else if(sum<n)
	{
		printf("it is a deficient number");
	}
	else
	{
		printf("it is abundant number");
	}
}
