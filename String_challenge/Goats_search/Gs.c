#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    int res[n],space=0;
    char s[30];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        int len = strlen(s)-1;
        if(len==1)
        {
            res[i]=len +1;
        }
        else if(len%2==0)
        {
            res[i] = len;
        }
        else if(len%2!=0)
        {
            res[i]=len-1;
        }
        if(space<res[i])
        {
            space = res[i];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(space-res[i])/2;j++)
        {
            printf(" ");
        }
        printf("b");
        for(j=0;j<res[i];j++)
        {
            printf("a");
        }
        printf("\n");
    }
    return 0;
}
