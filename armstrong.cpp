#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int sum=0,f;
	scanf("%d",&n);
	int c=n;
	int size=printf("%d",n);
	printf("\n");
	while(n!=0)
	{
	  f=pow((n%10),size);
	  sum+=f;
	  n/=10;
	  
	}
	if(sum==c)
	{
		printf("It is an armstrong number");
	}
	else
	{
		printf("It is not an Armstrong number");
	}
	
}
