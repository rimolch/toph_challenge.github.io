/*

1 3 5 2 4

even 

2 4

odd

1 3 5

*/

#include<stdio.h>

int main()

{

    int n,i,j,l,k,m,p;

    int c1,c2,f,g;

    int a[50],s[50];

    int e[50],odd[50];

    printf("Enter number:");

    scanf("%d",&n);

    printf("Enter %d number of elements:\n",n);

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);

      

    }

    for(f=0,g=0;f<n;f++)

    {

        s[g]=a[f];

        g++;

    }

    c1 = 0;

    c2 = 0;

    for(p=0,j=0,l=0;j<n;j++)

    {

        if(s[j]%2==0)

        {

            e[l++]=s[j];

            c1++;

        }

        else

        {

            odd[p++]=s[j];

            c2++;

        }

       

    }

    printf("Even:\n");

    for(k=0;k<c1;k++)

    {

       printf(" %d",e[k]);

    }

    printf("\n");

    printf("Odd:\n");

    for(m=0;m<c2;m++)

    {

        printf(" %d",odd[m]);

    }

    printf("\n");

    return 0;

}
