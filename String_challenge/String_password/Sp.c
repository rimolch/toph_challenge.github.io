#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[101];
    while(scanf("%s",&s)!=EOF)
    {
        int len,i;
        int low=0,up=0,dig=0,c=0;
        len = strlen(s);
      for(i=0;i<len;i++)
      {
          
            if(s[i]>='a'&&s[i]<='z')
            {
                low++;
            }
         else if(s[i]>='A'&&s[i]<='Z')
            {
                up++;
            }
         else if(s[i]-48>=0 && s[i]-48<=9)
            {
                dig++;
            }
       if(low>=1&&up>=1&&dig>=1)
        {
                
               /* hello1World2X
                
                      l   d  u   c
                  1)  1   0  0   0
                  2)  2   0  0   0
                  3)  3   0  0   0
                  4)  4   0  0   0
                  5)  5   0  0   0
                  6)  5   0  1   0
                  7)  5   1  1   1
                      0   0  0   (after c++)
                  8)  1   0  0   0
                  9)  2   0  0   0   
                 10)  3   0  0   0
                 11)  4   0  0   0
                 12)  4   0  1   0
                 13)  4   1  1   2(1+before 1)
              */
            c++;
            low=0;
            up =0;
            dig = 0;
        }
          
     }
      printf("%d\n",c); 
    }
    return 0;
}
