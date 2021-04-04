#include<stdio.h>
#include<math.h>
int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*fact(n-1);   
}
int nCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int m;
    scanf("%d",&m);
    int i,j,k;
    double F;
   for(i=0;i<m;i++){ 
        for(j=m-i;j>0;j--){
            printf("  ");
        }
       for(k=0;k<=i;k++){
            F = pow((i+k),m);
            printf("%0.0lf ",F);
          /*  printf("%4d",nCr(i,k));*/
        }
      
        printf("\n");
    }
    return 0;
}