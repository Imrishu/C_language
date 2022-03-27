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
    if(head==(struct node*)NULL || tail==(struct node*)NULL)
        return 1;
    return 0;
}


int traverse_list()
{
    int count = 0;
    struct node *temp = head;
    while(temp != (struct node*)NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


void Add_beginning(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=(struct node*)NULL;
    newnode->prev=(struct node*)NULL;
    if(isEmpty())
        head=tail=newnode;
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}


void Add_position(int val , int pos)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=(struct node*)NULL;
    newnode->prev=(struct node*)NULL;
    if(isEmpty())
        head=tail=newnode;
    else
    {
        int c=traverse_list();
        if(c>=pos)
        {
            struct node*temp = head;
            int i=1;
            while(i<(pos-1))
            {
                temp = temp->next;
                i++;
            }
            newnode->prev=temp;
            newnode->next=temp->next;
            temp->next=newnode;
            newnode->next->prev=newnode;
        }
        else
            perror("\nout of range");
    }
}


void Add_last(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=(struct node*)NULL;
    newnode->prev=(struct node*)NULL;
    if(isEmpty())
        head=tail=newnode;
    else
    {
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}


void Delete_beginning()
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        struct node *temp = head;
        head = head->next;
        head->prev=(struct node*)NULL;
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
        tail = tail->prev;
        tail->next = (struct node*)NULL;
        free(temp);
    }
}


void Delete_position(int pos)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        int c = traverse_list();
        if(c>=pos)
        {
            struct node *temp=head;
            int i = 1;
            while(i<pos)
            {
                temp = temp->next;
                i++;
            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
        }
        else
            perror("\nout of range");
    }
}


void reverse_list()
{
    struct node *previous_node , *current_node;
    current_node = head;
    previous_node = (struct node*)NULL;
    while(current_node != (struct node*)NULL)
    {
        previous_node = current_node;
        current_node = current_node->next;
        previous_node->next = previous_node->prev;
        previous_node->prev = current_node;
    }
    tail = head;
    head = previous_node;
}


int search_list(int val)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        int pos =0;
        struct node *temp=head;
        while(temp != (struct node*)NULL)
        {
            pos++;
            if(temp->data==val)
                return pos;
            temp=temp->next;
        } 
    }
    return 0;
}


void modify_list(int val , int pos)
{
    if(isEmpty())
        perror("\nthe list is Empty");
    else
    {
        int c = traverse_list();
        if(c>=pos)
        {
            struct node *temp =head;
            int i=1;
            while(i<pos)
            {
                temp = temp->next;
                i++;
            }
            temp->data = val;
        }
        else
            perror("\nout of range");
    }
}


void print()
{
    struct node *temp = head;
    while(temp != (struct node*)NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
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
    modify_list(13,3);
    modify_list(20,10);
    print();
    printf("\nthe reversed list is\n");
    reverse_list();
    print();
    int c = traverse_list();
    printf("\nthe list count is %d\n",c);
    Delete_last();
    Delete_beginning();
    Delete_position(5);
    Delete_position(3);
    Delete_last();
    Delete_beginning();
    Delete_position(2);
    Delete_last();
    printf("after deletion of the reverse list\n");
    print();
    int d = traverse_list();
    printf("\nthe list count is %d\n",d);
    return 0;
}