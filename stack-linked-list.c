#include <stdio.h>
#include <malloc.h>
#include <errno.h>

struct node{
    char data;
    struct node *next;
};
struct node *top = (struct node*)NULL;

int isEmpty()
{
    if(top == (struct node*)NULL)
        return 1;
    return 0;
}

void push(char val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = (struct node*)NULL;
    if(isEmpty())
        top = newnode;
    else
    {
        newnode->next = top;
        top = newnode;
    }
}

char pop()
{   
    char value;
    if(isEmpty())
        perror("\nthe stack is Empty");
    else
    {
        struct node *temp = top;
        top = top->next;
        value = temp->data;
        free(temp);
    }
    return value;
}

int peek()
{
    int peek;
    if(isEmpty())
        perror("\nthe stack is Empty");
    else
        peek = top->data;
    return peek;
}

void display()
{
    if(isEmpty())
        perror("\nthe stack is Empty");
    else
    {
        struct node *temp = top;
        while(temp != (struct node*)NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    printf("convert the following infix expression to postfix expression\n");
    printf("infix expression :- \t K+L-M*N+(O^P)*W/U/V*T+Q\n");
    printf("postfix expression :- \t ");
    printf("K");
    push('+');
    printf("L");
    char a = pop();
    printf("%c",a);
    push('-');
    printf("M");
    push('*');
    printf("N");
    char b = pop();
    printf("%c",b);
    char c = pop();
    printf("%c",c);
    push('+');
    printf("O");
    push('^');
    printf("P");
    char d = pop();
    printf("%c",d);
    push('*');
    printf("W");
    char e = pop();
    printf("%c",e);
    push('/');
    printf("U");
    char f = pop();
    printf("%c",f);
    push('/');
    printf("V");
    char g = pop();
    printf("%c",g);
    push('*');
    printf("T");
    char h = pop();
    printf("%c",h);
    char i = pop();
    printf("%c",i);
    push('+');
    printf("Q");
    char j = pop();
    printf("%c",j);
    return 0;
}