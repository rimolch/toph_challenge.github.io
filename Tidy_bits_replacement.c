#include<stdio.h>

#include<math.h>

int main(void)

{

    long long n;

    int count=0,sum=0,i,b;

    scanf("%lld",&n);

    while(n!=0)

    {

        b = n%2;

        if(b==1)

        {

            count++;

        }

        n = n/2;

    }

    for(i=0;i<count;i++)

    {

        sum = sum +pow(2,i);

    }

    printf("%d\n",sum);

}
