#include <stdio.h>

void printfcomma (int n) 
{
    int p;
    if (n < 1000)
    {
        printf ("%d", n);
        return;
    }
    printfcomma (n/1000);
    p = n%1000;
    printf (",%d",p);
}
int main (void)
{
    int n;
    scanf("%d",&n);
    printfcomma(n);
    return 0;
}