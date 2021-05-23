#include<stdio.h>

#include<string.h>

int main(void)

{

    int i;

    char s[1000];

 while(1)

 {

       gets(s);

  	 if(s[0]=='t'&&s[1]=='h'&&s[2]=='e'&&s[3]==' '&&s[4]=='e'&&s[5]=='n'&&s[6]=='d'&&s[7]=='.')   

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
