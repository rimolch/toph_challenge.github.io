#include<stdio.h>

#include<string.h>

int main(void)

{

    int i,j,n;

    char s[101];

    scanf("%d",&n);

    getchar();

  for(i=0;i<n;i++)

  {

        gets(s);

        int len = strlen(s);

        int c=0;

        for(j=0;j<len;j++)

        {

            if(s[j]>='0'&&s[j]<='6')

            {

                c++;

            }

            if(s[j]=='O')

            {

                c++;

            }

        }

        if(c==1)

        {

            printf("1 BALL\n");

        }

        if(c==6)

        {

            printf("1 OVER\n");

        }

        if(c<6)

        {

            printf("%d BALLS\n",c);

        }

        

      if(c>6)

      {

            if(c%6==0)

            {

                printf("%d OVERS\n",c/6);

            }

         else

         {

            if(c/6==1)

            {

                if(c%6==1)

                {

          printf("%d OVER %d BALL\n",c/6,c%6);

                }

                else

                {

          printf("%d OVER %d BALLS\n",c/6,c%6);

                }

            }

            else

            {

          printf("%d OVERS %d BALLS\n",c/6,c%6); 

            }

         }    

      }

  }

    return 0;

}
