#include<stdio.h>

int main()
{   int m,n;
    int i,j,k,swap;
    scanf("%d%d",&m,&n);
    int len=m+n;
    int a1[m],a2[n],a3[len];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&a2[j]);
    }
    for(i=0;i<m;i++)
    {
        a3[i]=a1[i];
    }
    for(i=0;i<n;i++)
    {
        a3[i+m]=a2[i];
    }
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a3[i]>a3[j])
            {
                swap=a3[i];
                a3[i]=a3[j];
                a3[j]=swap;
            }
        }
    }
    for(k=0;k<len;k++)
    {
        if(a3[k]<a3[k+1])
        {
            printf("%d ",a3[k]);
        }
    }
    printf("%d ",a3[len-1]);
}
