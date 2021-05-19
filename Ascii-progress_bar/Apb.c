#include<stdio.h>

int main()
{
    int i,j,plus,dot,percentage;
    double p;
    scanf("%lf",&p);
    percentage = p;
    plus = p/10;
    dot = 10-plus;
    if(plus<=10)
    {
        printf("[");
        for(i=0;i<plus;i++)
        {
            printf("+");
        }
        for(j=0;j<dot;j++)
        {
            printf(".");
        }
        printf("] %d%%\n",percentage);
    }
	return 0;
}
