#include<stdio.h>
#include<math.h>
#define max 1000
char is_prime[max];

void sieve()
{
    int i,j;
    for(i=2;i<max;i++)
    {
        is_prime[i]=1;//prime
    }
    for(i=2;i<=sqrt(max);i++)
    {
        for(j=i+i;j<max;j+=i)
        {
            is_prime[j]=0;//not prime
        }
    }
}
int main(void)
{
    sieve();
    int i;
    for(i=2;i<max;i++)
    {
        if(is_prime[i]==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
