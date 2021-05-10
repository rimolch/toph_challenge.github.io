#include<stdio.h>
#include<string.h>
char A[1000005],B[1000005],sum[1000005];
int main()
{

    int l1,l2,l3;
    int i,j,k,carry=0;

    int a,b,temp;
    scanf("%s%s",A,B);
    l1 = strlen(A);
    l2 = strlen(B);
  for(i=l1-1,j=l2-1,k=0;i>=0||j>=0;i--,j--,k++)
  {
      if(i<0)
      {
          b = (int)B[j]-48;
          temp = b+carry;
          sum[k]=(char)(temp%10)+48;
          carry = temp/10;
      } 
      
      else if(j<0)
      {
          a = (int)A[i]-48;
          temp = a+carry;
          sum[k]=(char)(temp%10)+48;
          carry = temp/10;    
      }
     else
     {
         a = (int)A[i]-48;
         b = (int)B[j]-48;
        temp = a+b+carry;
        sum[k]= (char)(temp%10)+48;
        carry = temp/10;
     } 
  }
    if(carry)
    {
        sum[k]=(char)carry+48;
    }
    l3 = strlen(sum);
    for(i=0,j=l3-1;i<l3;i++,j--)
    {
        A[i]=sum[j];
    }
    printf("%s\n",A);
    return 0;
}
