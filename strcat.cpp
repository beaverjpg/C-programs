#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int len(char *s1)
{
int i=0;
 while(s1[i]!='\0')
 	i++;
 	
return i;

}
int main()
{ int j=0;
 char *s1=(char*)malloc(sizeof(char)*100);
 char *s2=(char*)malloc(sizeof(char)*100);
 scanf("%s%s",s1,s2);
 int a=len(s1);
 int b=a+len(s2);
 for(int i=a;i<b;i++)
 {  if(s2[j]=='\0')break;
 	s1[i]=s2[j];
 	j++;
 }
 printf("%s",s1);
}
