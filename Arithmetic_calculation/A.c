#include<stdio.h>

int main()
{
    int t,a,b,i;
    char c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %c %d",&a,&c,&b);
        if(c=='+')
        {
            printf("Case %d: %d\n",i+1,a+b);
        }
        else if(c=='-')
        {
            printf("Case %d: %d\n",i+1,a-b);
        }
        else if(c=='*')
        {
            printf("Case %d: %d\n",i+1,a*b);
        }
        else if(c=='/')
        {
            printf("Case %d: %d\n",i+1,a/b);
        }
    }
    return 0;
}
