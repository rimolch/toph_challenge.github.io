#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,N=0,S=0,U=0;
    char s[10005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
       if(s[i]=='N')
       {
        N++;
       }
       else if(s[i]=='S')
       {
        S++;
       }
       else if(s[i]=='U')
       {
         U++;   
       }
    }   
    if(N<=S&&N<=U)
    {
        printf("%d\n",N);
    }
    else if(S<=N&&S<=U)
    {
        printf("%d\n",S);
    }
    else if(U<=N&&U<=S)
    {
        printf("%d\n",U);
    }
   
    return 0;
}
