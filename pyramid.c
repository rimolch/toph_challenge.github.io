#include<stdio.h>
int main()
{
   int N,i,j,k;
     scanf("%d",&N);
  for(i=0;i<N;i++){
       for(j=i;j<N-1;j++)
       {
         printf(" ");
       }
         for(k=0;k<=i;k++)
         {
            if(k==i)
            {
                printf("*");
             }
             else
             {
               printf("* ");   
             }
         }
     
    printf("\n");
  }
return 0;
}
