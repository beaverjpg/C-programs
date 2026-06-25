#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *s1=(char*)malloc(100);
	char *s2=(char*)malloc(100);
	scanf("%[^\n]",s1);
	int i;
	scanf("%d",&n);
	for( i=0;(s1[i]!='\0') ;i++)
	{   
		s2[i]=s1[i];
	}
	s2[i]='\0';// this line used to say the str ends here or else garbage value will printed as its memory is 100
	printf("%s",s2);
}
