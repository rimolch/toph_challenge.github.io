#include<stdio.h>
#include<math.h>
#define MAX 1000000
char is_Prime[MAX];

void Sieve()
{
    int i,j;
    for(i=2;i<MAX;i++)
    {
        is_Prime[i]=1;//initializing all the value are prime number
    }
    //for not prime number
    for(i=2;i<=sqrt(MAX);i++)//we need to check only until 2 to sqrt(max)
    {
        for(j=i+i;j<MAX;j+=i)//Now we have to cancel the multiple value of i until MAX
        {
            is_Prime[j]=0;//not prime number
        }
    }
}

int main(void)
{
    Sieve();
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(is_Prime[n]==1&&n>=2)
        {
            printf("%d is a prime number.\n",n);
        }
        else
        {
            printf("%d is not a prime number.\n",n);
        }
    }
    return 0;
}
