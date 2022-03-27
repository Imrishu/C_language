/*
There is a jar full of candies for sale at a mall counter. The jar has the capacity N, that is JAR can contain
maximum N Candies when a JAR is full. At any point in time, JAR can have an M number of candies where M<=N.
Candies are served to the customers. JAR is never remaining empty as when the last K candies are left, JAR is 
refilled with new candies in such a way that JAR gets full.
Write the code to implement the above scenario. Display JAR at the counter with the available number of candies.
Input should be the number of candies one customer orders at a point in time. Update the JAR after every purchase
and display JAR at the counter. The output should give the number of candies sold and the updated number of candies
in the JAR. If the input is more than the number of candies in JAR, return “INVALID INPUT”. 
Given,
N=10, Where N is the number of candies available, K<=5, Where K is the number of minimum candies that must be inside
JAR ever.
Example1: (N=10,K=<5)
Input #1: 3
Output :
Number of Candies Sold: 3
Number of Candies available:7
Input #2: 4
*/

#include <stdio.h>
#include <errno.h>

int N;
int k;

struct candies{
    int sold , available;
};
struct candies candy = {0,0};


struct candies candyInJar(int input)
{
    if(input>candy.available)
    {
        perror("\nINVALID INPUT");
        return candy;
    }
    else
    {
        candy.available = candy.available-input;
        if(candy.available<=k)
            candy.available = N;
    }
    candy.sold = candy.sold + input;
    return candy;
}

int main()
{
    int input,n;
    printf("maximum number of candies in a jar\n");
    scanf("%d",&N);
    printf("thresold number of candies is \n");
    scanf("%d",&k);
    candy.available = N;
    printf("enter 0 to continue\n");
    for(int i=0;;i++)
    {
        printf("enter the candies customer wants\n");
        scanf("%d",&input);
        struct candies result = candyInJar(input);
        printf("Number of Candies Sold : %d\n",result.sold);
        printf("Number of Candies available : %d\n",result.available);
        if(input==0)
            break;
    }
    return 0;
}
