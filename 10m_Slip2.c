/*Q1. Implement a list library(singlylist.h) for a singly linked list of integer
 with the operations create, display. Write a menu driven program to call
 these operations [10]
*/
#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(struct node *head)
{
    int n, i;
    struct node *newnode, *temp;
    printf("enter limit");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter value :");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

void disp(struct node *head)
{
    struct node *temp;
    for (temp = head; temp != NULL; temp = temp->next)
    {
        printf("%d\t", temp->data);
    }
}
int main()
{
    int ch, pos;
    struct node *head = NULL;

    do
    {
        printf("\n 1-Create \n 2-Display ");
        printf("\n Enter the choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = create(head);
            break;
        case 2:
            disp(head);
            break;
        default:
            printf("\n Invalid Choice....");
        }

    } while (ch < 3);
}

