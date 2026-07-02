#include<stdio.h>
#include<stdlib.h>
struct node{
	char *data;
	struct node *next;
}*head=NULL;
void append(char *name)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=name;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct node *temp=head;
		while(temp!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%s",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char *name=(char*)malloc(sizeof(101));
		scanf("%s",&name);
		append(name);
	}
	display();
}
