#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int Nth_prime(int n){
    int i;
    int root = sqrt(n);
    if(n<2)
       return false;
    if(n==2||n==3)
       return true;
    if(n%2==0||n%3==0)
       return false;
   else
    {
        for(i=5;i<=root;i++)
        {
            if(n%i==0)
              return false;
        }
    }
    
    return true;
}
int main()
{
    int N,count,k;
    k=2;
    count=0;
    scanf("%d",&N);
    while(1)
    {
        if(Nth_prime(k))
        {
        count++;
        }
        if(count==N)
        {
        printf("%d",k);
        break;
        }
        k++;
    }
    return 0;
}