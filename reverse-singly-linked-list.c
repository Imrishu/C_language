#include <stdio.h>
#include <malloc.h>
#include <errno.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = (struct node*)NULL;

int isEmpty()
{
    if(head==(struct node*)NULL)
        return 1;
    return 0;
}

void Add_list(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    if(isEmpty())
        head = newnode;
    else
    {
        struct node *temp = head;
        while(temp->next != (struct node*)NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void Reverse_list()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *current_node = head;
        struct node *next_node = head;
        struct node *prev_node = (struct node*)NULL;
        while(next_node != (struct node*)NULL)
        {
            next_node = next_node->next;
            current_node->next = prev_node;
            prev_node = current_node;
            current_node = next_node;
        }
        head = prev_node;
    }
}

void display()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *temp = head;
        while(temp != (struct node*)NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int n;
    printf("enter the number of nodes in the list\n");
    scanf("%d",&n);
    Add_list(n);
    // Add_list(2);
    // Add_list(3);
    // Add_list(4);
    // Add_list(5);
    // Add_list(6);
    // Add_list(7);
    // Add_list(8);
    // Add_list(9);
    printf("\nthe original list is\n");
    display();
    printf("\nthe reversed list is\n");
    Reverse_list();
    display();
    return 0;
}