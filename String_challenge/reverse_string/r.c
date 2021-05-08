#include<stdio.h>

int main()

{

    char s[1000],n[1000];

    int i,j,c=0;

   // scanf("%s",&s);

    gets(s);

    while(s[c]!='\0')

    {

        c++;

    }

    j = c-1;

    for(i=0;i<c;i++)

    {

        n[i]=s[j];

        j--;

    }

    printf("%s\n",n);

}

