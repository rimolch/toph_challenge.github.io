#include<stdio.h>

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int nCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int N,i,j,k,F;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=N-i;j>0;j--){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            F = nCr(i,k);
            printf("%d ",F);
          
        }
     printf("\n");
    }
  return 0;  
}