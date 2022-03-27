#include <stdio.h>
#include <malloc.h>
#include <errno.h>

struct node{
    int data;
    struct node *next;
};
struct node *rear = (struct node*)NULL;
struct node *front = (struct node*)NULL;

int isEmpty()
{
    if(front == (struct node*)NULL || rear == (struct node*)NULL)
        return 1;
    return 0;
}

void enqueue(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    if(isEmpty())
        rear = front = newnode;
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

int dequeue()
{
    int value;
    if(isEmpty())
        perror("\nthe queue is Empty");
    else
    {
        struct node *temp = front;
        front = front->next;
        value = temp->data;
        free(temp);
    }
    return value;
}

int peek()
{
    int value;
    if(isEmpty())
        perror("\nthe queue is Empty");
    else
    {
        value = front->data;
    }
    return value;
}

void display()
{
    int value;
    if(isEmpty())
        perror("\nthe queue is Empty");
    else
    {
        struct node *temp = front;
        while(temp != (struct node*)NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    enqueue(2);
    enqueue(1);
    enqueue(3);
    display();
    int a = dequeue();
    printf("\n%d\n",a);
    display();
    return 0;
}