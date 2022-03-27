#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

struct node{
    int data;
    struct node *next;
};
struct node *tail = (struct node*)NULL;

int isEmpty()
{
    if(tail == (struct node*)NULL)
        return 1;
    return 0;
}

int list_count()
{
    int count = 0;
    struct node *temp = tail->next;
    do{
        count++;
        temp = temp->next;
    }
    while(temp != tail->next);
    return count;
}

void Add_beginning(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    if(isEmpty())
    {
        tail = newnode;
        newnode->next = tail;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }
}

void Add_position(int val , int pos)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    if(isEmpty())
    {
        tail = newnode;
        newnode->next = tail;
    }
    else
    {
        int c = list_count();
        if(c>pos)
        {
            struct node *temp = tail->next;
            int i = 1;
            while(i<(pos-1))
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        else
            perror("\nthe position is out of range");
    }
}

void Add_last(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    if(isEmpty())
    {
        tail = newnode;
        newnode->next = tail;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

void Delete_beginning()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *temp = tail->next;
        tail->next = temp->next;
        free(temp);
    }
}

void Delete_position(int pos)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        int c = list_count();
        if(c>=pos)
        {
            struct node *temp = tail->next;
            struct node *p = (struct node*)NULL;
            int i =1;
            while(i<pos)
            {
                p = temp;
                temp = temp->next;
                i++;
            }
            p->next = temp->next;
            free(temp);
        }
        else
            perror("\nthe position is out of range");
    }
}

void Delete_last()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *temp = tail->next;
        struct node *p = (struct node*)NULL;
        do{
            p = temp;
            temp = temp->next;
        }
        while(temp != tail);
        p->next = tail->next;
        tail = p;
        free(temp);
    }
}

void Reverse_list()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *current = tail->next;
        struct node *next_node = current->next;
        struct node *prev = (struct node*)NULL;
        while(current != tail)
        {
            prev = current;
            current = next_node;
            next_node = next_node->next;
            current->next = prev;
        }
        next_node->next = tail;
        tail = next_node;
    }
}

int search_list(int val)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        int pos = 0;
        struct node *temp = tail->next;
        do{
            pos++;
            if(temp->data == val)
                return pos;
            temp = temp->next;
        }
        while(temp != tail->next);
    }
    return 0;
}

void modify(int val , int pos)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        int c = list_count();
        if(c>=pos)
        {
            struct node *temp = tail->next;
            int i =1;
            while(i<pos)
            {
                temp = temp->next;
                i++;
            }
            temp->data = val;
        }
        else
            perror("\nthe position is out of range");
    }
}

void Display()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *temp = tail->next;
        do{
            printf("%d->",temp->data);
            temp = temp->next;
        }
        while(temp != tail->next);
    }
}

int main()
{
    Add_beginning(4);
    Add_last(8);
    Add_beginning(3);
    Add_last(9);
    Add_beginning(2);
    Add_position(5,4);
    Add_position(6,5);
    Add_beginning(1);
    Add_last(10);
    Add_position(7,7);
    printf("the original list is\n");
    Display();
    int a = search_list(10);
    if(a==0)
        printf("\nthe value 10 is not present in the list\n");
    else
        printf("\nthe value 10 is present in list at position %d\n",a);
    int b = search_list(15);
    if(b==0)
        printf("the value 15 is not present in the list\n");
    else
        printf("the value 15 is present in list at position %d\n",b);
    printf("the modified list is\n");
    modify(13,3);
    modify(20,10);
    Display();
    printf("\nthe reversed list is\n");
    Reverse_list();
    Display();
    int c = list_count();
    printf("\nthe list count is %d\n",c);
    Delete_last();
    Delete_beginning();
    Delete_position(5);
    Delete_position(3);
    Delete_last();
    Delete_beginning();
    Delete_position(2);
    printf("after deletion of the reverse list\n");
    Display();
    int d = list_count();
    printf("\nthe list count is %d\n",d);
    return 0;
}