#include<stdio.h>

int main()
{
    int i,c=0;
    char str[26];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(')
        {
            c++;
        }
        else if(str[i]==')')
        {
            c--;
        }
        if(c==-1)
        {
            break;
        } 
    }
    if(c==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
