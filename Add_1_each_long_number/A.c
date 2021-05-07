#include<stdio.h>


int main()
{
    long long a,b,p1,p2,l1=0,t[100],i,j;
    scanf("%lld%lld",&a,&b);
    p1 = a*b;
    for(i=0;p1>0;i++)
    {
        p1 = p1/10;
        l1++;
    }
    p2 = a*b;
    for(j=0;j<l1;j++)
    {
        t[j]= (p2%10)+1;
        p2 = p2/10;
    }
    for(i=l1-1;i>0;i--)
    {
        printf("%lld",t[i]);
    }
    printf("%lld",t[0]);
    printf("\n");
    return 0;
}
