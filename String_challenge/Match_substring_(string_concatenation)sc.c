#include <stdio.h>
#include <string.h>
int main() 
{
     int t;
     char s[100]; 
     char main_s[1000];
     scanf("%d",&t);
     while(t--)
     { 
        scanf("%s",s); 
        strcat(main_s, s); 
        /*
        strcat stands for string concatenation.
        strcat(s1,s).Here the destination string is s1 i.e the string(s) which you entered store in s1.
        */
     }
    printf("%s\n",main_s); 
    return 0; 
}
