#include<stdio.h>


int main()
{
    long long int t,a,b,c,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            printf("YES\n");
        }
        else if(n==1)
        {
            printf("YES\n");
        }
        else
        {
          /* fibonacci series goes like --- 0 1 1 2 3 5 8 13 21.......
          lets assum first value as a = 0,b=1 and c will be the sum of two numbers.
          And then loop starts untill the given number .After loop it will check whether the sum of last number(c) is equal to or not equal to given number*/
            a=0;
            b=1;
            c=a+b;
            while(c<n)
            {
                a = b;
                b = c;
                c = a+b;
            }
            if(c==n)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
