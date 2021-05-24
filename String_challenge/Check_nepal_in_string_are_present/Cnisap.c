#include<stdio.h>
#include<string.h>

int main()
{
    int test,i,c1,c2,c3,c4,c5;
    char s[500];
    scanf("%d",&test);
    //getchar();
    while(test--)
    {
        c1=0,c2=0,c3=0,c4=0,c5=0;
        scanf("%s",&s);
        for(i=0;i<s[i]!='\0';i++)
        {
            if(s[i]=='n')
            {
                c1++;
            }
            else if(s[i]=='e')
            {
                c2++;
            }
            else if(s[i]=='p')
            {
                c3++;
            }
            else if(s[i]=='a')
            {
                c4++;
            }
            else if(s[i]=='l')
            {
                c5++;
            }
        }
        if(c1>=1&&c2>=1&&c3>=1&&c4>=1&&c5>=1)
        {
            printf("Maile Nepal banauna sakchhu!!\n");
        }
        else
        {
            printf("Hami sabai milera Nepal Banau hai!!\n");
        }
    }
    return 0;
}
