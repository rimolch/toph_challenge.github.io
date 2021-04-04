#include<stdio.h>

int main(){
    int M,N,sum,count =0;
    scanf("%d %d",&M,&N);
    while(M>0&&N>0){
        sum = (M%10)+(N%10);//adding two remainder
        if(sum>9){
            count=1;
            break;
        }
      M = M/10;//The new quotient
      N = N/10;//The new quotient
    }
    if(count ==0){
        printf("No");
    }
    else{
        printf("Yes");
    }
}