#include<stdio.h>
int main(){
    int H,M;
    double a1,a2,H_angle,M_angle;
    scanf("%d %d",&H,&M);
    if(H<0||M<0||H>12||M>60){
        printf("wrong input");
    }
    if(H==12){
        H=0;
    }
    if(M==60){
        M=0;
    }
    H_angle = 30*H+0.5*M;
    M_angle = 6*M;
    if(H_angle<M_angle){
        a1= M_angle-H_angle;
        a2= 360-a1;
    }
    else{
        a1 = H_angle-M_angle;
        a2= 360-a1;
    }
    if(a1<a2){
        printf("%.7lf",a1);
    }
    else{
        printf("%.7lf",a2);
    }
    return 0;
}