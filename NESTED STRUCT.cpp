#include<stdio.h>
#include<stdlib.h>
struct details
{
	int roll;
	char name[100];
	struct address
	{
		char city[50];
		int pincode;
	}add;
};
int main()
{   struct details s1;
	scanf("%d",&s1.roll);
	scanf("%s",s1.name);
	scanf("%s",s1.add.city);
	scanf("%d",&s1.add.pincode);
	printf("ROLL NO: %d\n",s1.roll);
	printf("NAME : %s\n",s1.name);
	printf("CITY : %s\n",s1.add.city);
	printf("PINCODE : %d\n",s1.add.pincode);
	
}
