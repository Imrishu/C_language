#include <stdio.h>
#include <malloc.h>
#include <errno.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = (struct node*)NULL;
struct node *tail = (struct node*)NULL;

int isEmpty()
{
    if(head==(struct node*)NULL || tail == (struct node*)NULL)
        return 1;
    return 0;
}

int list_count()
{
    int count  = 0;
    struct node *temp = head;
    do
    {
        count++;
        temp = temp->next;
    }
    while(temp != head);
    return count;
}

void Add_beginning(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    newnode->prev = (struct node*)NULL;
    if(isEmpty())
    {
        newnode->next = newnode;
        newnode->prev = newnode;
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        newnode->prev = tail;
        tail->next = newnode;
        head->prev = newnode;
        head = newnode;
    }
}

void Add_last(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    newnode->prev = (struct node*)NULL;
    if(isEmpty())
    {
        newnode->next = newnode;
        newnode->prev = newnode;
        head = newnode;
        tail = newnode;
    }
    else
    {
       newnode->prev = tail;
       newnode->next = head;
       head->prev = newnode;
       tail->next = newnode;
       tail = newnode; 
    }
}

void Add_position(int val , int pos)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    newnode->prev = (struct node*)NULL;
    if(isEmpty())
    {
        newnode->next = newnode;
        newnode->prev = newnode;
        head = newnode;
        tail = newnode;
    }
    else
    {
        int c = list_count();
        if(c>pos)
        {
            struct node *temp = head;
            int i = 1;
            while(i<(pos-1))
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            newnode->prev = temp;
            temp->next->prev = newnode;
            temp->next = newnode;
        }
        else
            perror("\nout of range position");
    }
}

void Delete_beginning()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *temp = head;
        tail->next = head->next;
        head = head->next;
        head->prev = tail;
        free(temp);
    }
}

void Delete_last()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *temp = tail;
        head->prev = tail->prev;
        tail = tail->prev;
        tail->next = head;
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
        if(c >= pos)
        {
            struct node *current_node = head;
            struct node *prev_node = (struct node*)NULL;
            int i =1;
            while(i<pos)
            {
                prev_node = current_node;
                current_node = current_node->next;
                i++;
            }
            prev_node->next = current_node->next;
            current_node->next->prev = prev_node;
            free(current_node);
        }
        else
            perror("\nout of range position");
    }
}

void Reverse_list()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *next_node , *current_node;
        next_node = current_node = head;
        do
        {
            next_node = next_node->next;
            current_node->next = current_node->prev;
            current_node->prev = next_node;
            current_node = next_node;
        }
        while(current_node != head);
        head = tail;
        tail = next_node;
    }
}

void modify_list(int val , int pos)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        int c = list_count();
        if(c>=pos)
        {
            struct node *temp = head;
            int i=1;
            while(i<pos)
            {
                temp=temp->next;
                i++;
            }
            temp->data = val;
        }
        else
            perror("\nout of range position");
    }
}

int Search_list(int val)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        int pos = 0;
        struct node *temp = head;
        do
        {
            pos++;
            if(temp->data == val)
                return pos;
            temp = temp->next;
        }
        while(temp != head);
    }
    return 0;
}

void print()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *temp = head;
        do
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        while(temp != head);
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
    print();
    int a = Search_list(5);
    if(a==0)
        printf("\nthe value 5 is not present in the list\n");
    else
        printf("\nthe value 5 is present in list at position %d\n",a);
    int b = Search_list(15);
    if(b==0)
        printf("the value 15 is not present in the list\n");
    else
        printf("the value 15 is present in list at position %d\n",b);
    printf("the modified list is\n");
    modify_list(13,3);
    modify_list(20,10);
    print();
    printf("\nthe reversed list is\n");
    Reverse_list();
    print();
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
    print();
    int d = list_count();
    printf("\nthe list count is %d\n",d);
    return 0;
}