#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 char *s=(char*)malloc(100);
 scanf("%[^\n]",s);
 int i=0;
 while(s[i]!='\0')
 	i++;
 }	
 printf("%d",i); 
}


