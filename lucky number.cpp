#include<stdio.h>
int main()
{
	 int n;
	 scanf("%d",&n);
	 int lucky=7;
	 int c;
	 do
	 {
	 	int sum=0;
	 	while(n!=0)
	 	{
	 		sum=sum+(n%10);
	 		n=n/10;
	 		
		 }
		 c=sum;
		 n=sum;
		 
		 
	 }while(c>10);
	 if(c==lucky)
	 {
	 	printf("It is a Lucky NUmber");
	 }
	 else
	 {
	 	printf("It is not lucky Number");
	 }
	 
}
