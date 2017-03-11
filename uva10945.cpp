#include<stdio.h>
#include<string.h>
int main()
{
    char str[500],ch[500];
    int c,a,b,ln,d,i,j;
    while(1)
    {
        gets(str);
        if(strcmp(str,"DONE")==0)return 0;
        ln=strlen(str);
        j=0;
        for(i=0;i<ln;i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                ch[j]=str[i];
                j++;
            }
            if(str[i]>='A'&&str[i]<='Z')
            {
                ch[j]=str[i]+32;
                j++;
            }
        }
        ch[j]='\0';
        c=1;
        for(i=0;i<=j/2;i++)
            if(ch[i]!=ch[j-i-1])
            {
                c=0;
                break;
            }
            if(c==1)
                printf("You won't be eaten!\n");
           else
            printf("Uh oh..\n");
    }
}
