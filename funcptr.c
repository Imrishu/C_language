#include<stdio.h> 

// int add(int num1, int num2) {
//     return num1 + num2;
// }

// int substract(int num1, int num2) {
//     return num1 - num2;
// }
/*
<return type> (*<name of pointer of your choice>)(type of paramerters) = &add
int dummy(int x,  int(*ptr)(int, char))
{

}
*/
int func(int a, char c)
{
    printf("this is function pointer %d, %c\n",a,c);
    return 0;
}

int dummy(int x,  int(*ptr)(int, char))
{
    printf("hello dummy\n");
    return 0;
}

int main() {
    // int (*ptr)(int, int);
    // ptr = &add;
    // int result = (ptr)(2, 4);
    // printf("the sum is %d\n",result);
    // ptr = &substract;
    // result = (ptr)(2, 4);
    // printf("the sum is %d\n",result);
    int (*ptr)(int, char) = &func;
    int (*pointer)(int, int(*ptr)(int, char));
    pointer = &dummy;
    pointer(3, ptr(2, 'f'));
    return 0;
}