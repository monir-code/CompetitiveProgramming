#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    int i,j,ln,c,a,b;
    while(gets(str))
    {
        ln=strlen(str);
        a=0;
        b=0;
        c=0;
        for(i=0;i<ln;i++)
        {
            if(str[i]==' '){
             c++;   b=i-1;
            for(j=b;j>=a;j--)
                printf("%c",str[j]);
            a=i+1;
            printf(" ");
            }

        }

        for(i=ln-1;i>=0;i--)
        {
            if(str[i]==' ')
            {
                printf("\n");
                break;
            }
                printf("%c",str[i]);
        }
        if(c==0)printf("\n");
        }

    }

