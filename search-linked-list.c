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

int search_list(int val)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else{
        int pos = 0;
        struct node *temp = head;
        while(temp != (struct node*)NULL)
        {
            pos++;
            if(temp->data == val)
                return pos;
            temp = temp->next;
        }
    }
    return 0;
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
    Add_list(1);
    Add_list(2);
    Add_list(3);
    Add_list(4);
    Add_list(5);
    Add_list(6);
    Add_list(7);
    Add_list(9);
    Add_list(8);
    display();
    int value = search_list(9);
    if(value == 0)
        printf("/nthe entered value is not present in the list\n");
    else
        printf("\nthe entered value is present in the list at position %d\n",value);
    return 0;
}