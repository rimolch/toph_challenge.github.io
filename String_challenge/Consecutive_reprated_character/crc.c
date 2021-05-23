#include<stdio.h>
#include<string.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char s[200];
        int j;
        scanf("%s",&s);
        int len = strlen(s);
        for(j=0;j<len;j++)
        {
            if(s[j]!=s[j+1])
            {
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
