/*

*/
#include <stdio.h>
#define mod 1000000007
 
long e_sum(long m,long n,long K,long N)
{
    if(K==1)
    {
       return n;
    }
    else
    {
        return (N-(m-n)*e_sum(m,n,K-1,N)%(mod));
    }
}
int main()
{
    long low,high,K,m,n,diff,Out,N,i;
    scanf("%ld",&low);
    scanf("%ld",&high);
    scanf("%ld",&K);
    diff=high-low+1;
    if(diff%2==0)
    {
        m=diff/2;
        n=m;
    }
    else
    {
        if(low%2==0)
        {
            m=(diff-1)/2;
            n=m+1;
        }
        else
        {
            m=(diff+1)/2;
            n=m-1;
        }
    }
    N=m;
    for(i=0;i<K-1;i++)
    {
        N=(N*(m+n))%mod;
    }
    Out=e_sum(m,n,K,N)%mod;
    printf("%ld",Out);
    return 0;
}