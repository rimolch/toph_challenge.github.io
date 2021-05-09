#When the length of both two numbers  are same 
#include<stdio.h>
#include<string.h>

int main()
{
    char A[1000005],B[1000005],C[1000005];
    int la,lb,i,j,k,a,b,temp,carry=0,lc;
    scanf("%s %s",A,B);
    la=strlen(A);
    lb=strlen(B);
 for(i=la-1,j=lb-1,k=0;i>=0 || j>=0;i--,j--,k++)
  {
        if(i>=0&&j>=0)
        {
            a=(int)A[i]-48;
            b=(int)B[j]-48;
            temp=a+b+carry;
            C[k]=(char)(temp%10)+48;
            carry=temp/10;
        }
  }
    if(carry)
    {
        C[k]=(char)carry+48;
    }
        lc=strlen(C);
    for(i=0,j=lc-1;i<lc;i++,j--)
        A[i]=C[j];
        printf("%s\n",A);
 
    return 0;
}
