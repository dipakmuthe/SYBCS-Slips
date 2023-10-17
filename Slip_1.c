Q1.Implement a list library (doublylist.h) for a doubly linked list of integers 
 with the create, display operations. Write a menu driven program to call 
 these operations. [10]

==> #include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
 struct node *next,*prev;
}node;

 struct node *create(struct node *list)
{
 int i,n;
 struct node *newnode,*temp;
 printf("enter limit :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter value :");
 scanf("%d",&newnode->data);
  newnode->next=NULL;
 if(list==NULL)
{
  list=newnode;
  temp=newnode;
}
else
{
 temp->next=newnode;
 newnode->prev=temp;
 temp=newnode;
}
}
return list;
}
 void disp(struct node *list)
{
 struct node *temp;
 for(temp=list;temp!=NULL;temp=temp->next)
{
 printf("%d\t",temp->data);
}
}
int main()
{ 
	int ch;
	struct node *list=NULL; 

	do{
   	  printf("\n 1-Create \n 2-Display");
   	  printf("\n Enter the choice:");
   	  scanf("%d",&ch);
       switch(ch)
       {
       	 case 1: list=create(list); 
       	         break;
       	 case 2: disp(list); 
       	 		 break;
       	 
       	 default :printf("\n Invalid Choice....");
	   }
   
   }while(ch<3);
 }


----------------------------------------------------------------------------

Q2. Write a program that sorts the elements of linked list using any of sorting 
 technique. [20]
==>#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *create(NODE *list)
{
	NODE *newnode,*temp;
	int i,n;
	printf("enter limit");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		printf("enter value");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		
		if(list==NULL)
		{
			list=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
			
		}
	
	}
	return list;
}



void disp(NODE *list)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("%d",temp->data);
	}
}


NODE *bubble(NODE *list)
{
	NODE *temp,*temp1;
	int t;
	
	for(temp=list;temp->next!=NULL;temp=temp->next)
	{
		for(temp1=list;temp1->next!=NULL;temp1=temp->next)
		{
			if(temp1->data>temp1->next->data)
			{
				t=temp1->data;
				temp1->data=temp1->next->data;
				temp1->next->data=t;
				
			}
		}
	}
	return list;
	
}


int main()
{
	int ch,num;
	NODE *list=NULL;
	list=create(list);
	disp(list);
	printf("\n sorted list");
	bubble(list);
	disp(list);
}
