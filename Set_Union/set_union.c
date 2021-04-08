#include <stdio.h>
 
 int main()
 {
    int m,n,i,j,swap;
    scanf("%d%d",&m,&n);
    int len=m+n;
    int a1[m],a2[n],a3[len];
     for(i=0;i<m;i++)
     {
        scanf("%d",&a1[i]);
     }  
     for(i=0;i<n;i++)
     {
       scanf("%d",&a2[i]);
     }
    for(i=0;i<m;i++)
    {
       a3[i] = a1[i];
    }
   for(i=0;i<n;i++)
   {
        a3[i+m] = a2[i];
    }
   for(i=0;i<len-1;i++)     
    {   for(j=i+1;j<len;j++)
         {
           if(a3[i]>a3[j])        
           {
               swap = a3[i];
              a3[i] = a3[j];
              a3[j] = swap;
           } 
        }
    }
   for(i=0;i<len-1;i++)
   {
      if(a3[i] < a3[i+1])
      {
           printf("%d ",a3[i]);
       }
   }
   printf("%d",a3[len-1]);
 return 0;
}
