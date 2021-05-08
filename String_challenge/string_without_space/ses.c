#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000], n[1000];
    int i = 0, j = 0, len;
    gets(s);
    len = strlen(s);
    while(s[i] != '\0')
    {
        if(s[i]!= ' ')
        {
            n[j++] = s[i];
        }
        i++;
    }
    printf("%s\n", n);
    return 0;
}
