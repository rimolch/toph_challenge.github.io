#include<stdio.h>

int main()
{
    int t,a,b,c=0,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        for(i=b;i>=a;i--)
        {
            c = 0;
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    c = 1;
                    break;
                }
            }
           if(c==0&&i!=1)
            {
                printf("%d\n",i);
                break;
            }
        }
        if(c==1||a==1||b==1)
        {
            printf("-1\n");
           
        }
    }
    return 0;
}
