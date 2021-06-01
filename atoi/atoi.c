#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s[1000000];

int main(void)
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s);
        int p;
        int len = strlen(s);
        p = atoi(&s[len-1]);
        printf("%d\n",(p*p)%10);
    }
    return 0;
}
