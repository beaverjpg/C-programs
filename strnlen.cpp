#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 char *s=(char*)malloc(100);
 scanf("%[^\n]",s);
 int i=0,n;
 scanf("%d",&n);
 while(s[i]!='\0'&& i!=n)//hello->5 strnlen(s,8) here 8 is the maximum -> here 5 will get printed but word contain 16 letetr wont be displayed as the maximum count is 8
 {  
 	i++;
 }	
 printf("%d",i);
}


