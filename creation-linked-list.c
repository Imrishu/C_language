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
    if(head == (struct node*)NULL)
        return 1;
    return 0;
}

void insert_list(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    if(isEmpty())
        head = newnode;
    else
    {
        newnode->next = head;
        head = newnode;
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
    insert_list(1);
    insert_list(2);
    insert_list(3);
    insert_list(4);
    insert_list(5);
    insert_list(6);
    display();
    return 0;
}