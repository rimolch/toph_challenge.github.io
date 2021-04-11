#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,max,len,count;
    max=0;
    count=0;
    int num[10]={0};
    char str[1000];
    scanf("%s",&str);
    len= strlen(str);
    for(i=0;i<len;i++)
    {
        num[str[i]-'0']++;
    }
    for(j=0;j<10;j++)
    {
        if(num[j]>max)
        {
            max = num[j];
            count=j;
        } 
    }
    printf("%d",count);
}