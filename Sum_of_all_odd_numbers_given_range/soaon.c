#include<stdio.h>

int main()
{
    long long int t,l,m,k,r,n,i;
    long long sum;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&l,&m);
        if(l%2==0)
        {
            k = l+1;)//if the first number is even then we increase it by 1
        }
        else
        {
            k = l;//else we don't need to increase
        }
        if(m%2==0)
        {
            r = m-1;//if the last number is even then we decrease it by 1
        }
        else
        {
            r = m;//else we don't need to decrease
        }
        n = ((r+2)-k)/2;
        /*
           this is the formula wher k(firstnumber)+(n-1)d=r(last number)
        */
        sum = n*(k+r)/2;// it goes like s = n(n+1)/2 formula 
        printf("Case %lld: %lld\n",i+1,sum);
    }
    return 0;
}
