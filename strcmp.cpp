#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{//strcmp
 char *s1=(char*)malloc(sizeof(char)*100);
 char *s2=(char*)malloc(sizeof(char)*100);
 scanf("%s%s",s1,s2);
 bool statement=true;
if(strlen(s1)==strlen(s2))
{
	for(int i=0;s1[i]!='\0';i++)
	{
	 char a=(char)s1[i];
	 char b=(char)s2[i];
	 if(a==b)
	{
	 continue;	
	}
	 else
	 {
	 statement=false;
	 break;
	 }
	}
}
else
{
	statement=false;
}
if(statement==false)
{
	printf("not equal");
}
else
{
	printf("equal");
}
 
 
 	
}
