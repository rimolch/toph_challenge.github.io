#include<stdio.h>

char s[100001];
int n[100001];

int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%s",s);
        printf("Case #%d:\n",i+1);
        for(j=0;s[j]!='\0';j++)
        {
            n[s[j]]++;
        }
        for(k=0;s[k]!='\0';k++)
        {
            if(n[s[k]]!=0)
            {
                printf("%c %d\n",s[k],n[s[k]]);
                n[s[k]]=0;
            }
        }
    }
    return 0;
}
