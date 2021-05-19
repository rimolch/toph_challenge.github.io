#include<stdio.h>
#include<string.h>


int main()
{
    int i,len,n;
    char str[1000];
    scanf("%d",&n);
    getchar();//we are using both getchr() and gets(str).getchar() only reads one char 
    gets(str);//scanf("%[^\n]",&str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
           if(str[i]!=' ')
           {
               str[i]=str[i]-n;
            
              if(str[i]<97)
              {
                str[i]=122-(97-str[i]-1);
              }
            
           }
    }
    printf("%s\n",str);
}
