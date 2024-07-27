#include<stdio.h>
struct node
{
	int val;
	struct node *next;
};
struct node *head=NULL;
struct node *last=NULL;


void createandinsertnode()
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value to the item:");
	scanf("%d",&new->val);
	new->next=NULL;

	if(head==NULL){
		head=new;
		last=new;
	}
	else
	{
		last->next=new;
		last=new;
	}
	printf("\nItem has been inserted....");
}

void display()
{
 struct node *temp;
 temp=head;
 if(temp==NULL){
 	printf("\n List is empty");
 	return;
 }
 while(temp!=NULL){
 	printf("\n%d",temp->val);
 	temp=temp->next;//shift temp to next node
 }

}


void createandinsertnodeatbeg()
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value to the item:");
	scanf("%d",&new->val);
	new->next=NULL;
	if(head==NULL){
		head=new;
		last=new;
	}
	else{
		new->next=head;
		head=new;	
	}
}
void createnodeatparticularpost(int val)
{
	struct node *temp;
	//creating node//
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value to the item:");
	scanf("%d",&new->val);
	new->next=NULL;
	
	temp=head;
	if(head==NULL){
		return;
	}
	else
	{
		while(temp!=NULL && temp->val!=val){
			temp=temp->next;
		}
		if(temp==NULL){
			printf("\nValue does not exist");
			return;
		}
		new->next=temp->next;
		temp->next=new;
		printf("\nItem has been inserted....");	
	}
}

/*int main()
{
	int i;
	display();
	
	for(i=1;i<=5;i++)
	{
		createandinsertnode();
	}
	
	createandinsertnodeatbeg();
	display();
	
	createnodeatparticularpost(70);
	display();
	return 1;
}*/

int main()
{
	int val, i, n;
	printf("\nEnter which case do you want \nEnter 1 for insert node \nEnter 2 for insert node at beginning \nEnter 3 for insert node at a particular position");
	scanf("%d",&val);

	switch(val)
	{
		case 1:
			display();
			for(i=1 ; i<=5 ; i++)
			{
				createandinsertnode();	
			}
			break;
		
		case 2:
			display();
			for(i=1 ; i<=5 ; i++)
			{
				createandinsertnode();
			}
			printf("\n Enter the number to add at beginning:");
			createandinsertnodeatbeg();
			display();
			break;
		
		case 3:
			display();
			for(i=1 ; i<=5 ; i++)
			{
				createandinsertnode();
			}
			printf("\nEnter the number you want to insert after: ");
			scanf("%d",&n);
			createnodeatparticularpost(n);
			display();
			break;
		
		default:
			printf("\nIt is an Invalid case:");
			break;
	}
	
}