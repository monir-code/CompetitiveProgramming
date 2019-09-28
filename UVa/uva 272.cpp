#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100000];
    long int ln,i,j,c=0;
    while(gets(s))
    {
        ln=strlen(ch);
        for(i=0;i<ln;i++){
         if(ch[i]=='"')
         {
             c++;
             if(c&1)
                printf("''");
            else
                printf(""");
         }
         else printf("%c",ch[i]);
        }
        printf("\n");
    }
    return 0;
}
