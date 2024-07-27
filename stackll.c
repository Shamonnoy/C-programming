#include <stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *next;
}*head=NULL,*top=NULL;


void push()
{
	int val;
	struct node *new;
	//create new node//
	new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nOverflow");
		return;
	}
	printf("\nenter Value:");
	scanf("%d",&val);
	new->value=val;
	new->next=NULL;

	if(head==NULL)
	{
		head=new;
		top=new;
		printf("\nItem has been pushed into stack");
	}
	else
	{
		top->next=new;
		top=top->next;
		printf("\nItem has been pushed into stack");
	}
}

void pop()
{
	struct node *temp,*todel;
	if(head==NULL)
	{
		printf("\nUnderflow");
		return;
	}
	temp=head;
	while(temp->next!=top)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	todel=top;
	free(todel);
	top=temp;
	printf("\nItem popped out from stack");
}

void disp()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nEmpty");
		return;
	}
	printf("\nDisplaying list:");
	temp=head;
	while(temp!=NULL)
	{
		printf("\n%d",temp->value);
		temp=temp->next;
	}
}

int main()
{
	int c,x=1;
	do
	{
		printf("\n 1.push\n 2.pop\n 3.display \nEnter Item:");
		scanf("%d",&c);
		switch (c)
		{
			case 1:
				push();
				break;
			
			case 2:
				pop();
				printf("Item has been popped");
				break;

			case 3:
				disp();
				break;
			
			default:
				printf("Invalid choice");
				break;
		}
		printf("\n press 1 to continue or press any key to exit");
		scanf("%d",&x);
	}
	while (x==1);
	{
		printf("Exitting");
		return 0;
	}
	
}