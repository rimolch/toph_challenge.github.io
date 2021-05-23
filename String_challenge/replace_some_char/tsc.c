#include<stdio.h>
#include<string.h>

int main(void)
{
    int i;
    char s[1000];
 while(1)
 {
       gets(s);
  	 if(strcmp(s,"the end.")==0)
    /*
The strcmp() function is used to compare two strings two strings str1 and str2. If two strings are same then strcmp() returns 0, otherwise, it returns a non-zero value.

            
        */
    {
            break;
    }
    for(i=0;s[i]!='\0';i++)
    {
        
        if(s[i]=='b')
        {
            s[i]='6';
            
        }
        else if(s[i]=='g')
        {
            s[i]='9';
           
        }
        else if(s[i]=='l')
        {
            s[i]='1';
           
        }
        else if(s[i]=='o')
        {
            s[i]='0';
           
        }
        else if(s[i]=='s')
        {
            s[i]='5';
            
        }
        else if(s[i]=='z')
        {
            s[i]='2';
            
        }
            else if(s[i]=='6')
        {
            s[i]='b';
           
        }
        else if(s[i]=='9')
        {
            s[i]='g';
           
        }
        else if(s[i]=='1')
        {
            s[i]='l';
           
        }
        else if(s[i]=='5')
        {
            s[i]='s';
            
        }
        else if(s[i]=='2')
        {
            s[i]='z';
            
        }  
        else if(s[i]=='0')
        {
                s[i]='o';
        }
    
    }
    printf("%s\n",s);
 }
    return 0;
}
