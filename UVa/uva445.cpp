#include<stdio.h>
#include<string.h>
int main()
{
    char str[133];
    int ln,i,j,a,c;
    while(gets(str))
    {
        ln=strlen(str);
        for(i=0;i<ln;i++)
        {
            if(str[i]=='!')printf("\n");
            else if(str[i]=='b')
            {
                a=i-1;
                c=0;
                while(str[a]>=48&&str[a]<=57)
                {
                    c+=(str[a]-48);
                    a--;
                }
                for(j=0;j<c;j++)printf(" ");
            }
            else if(str[i]<48||str[i]>57){
                a=i-1;
                c=0;
                while(str[a]>=48&&str[a]<=57)
                {
                    c+=(str[a]-48);
                    a--;
                }
                for(j=0;j<c;j++)printf("%c",str[i]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
