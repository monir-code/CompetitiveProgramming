#include<stdio.h>
#include<string.h>
int main()
{
    int ln,a,b,c,i,r;
    char str[101];
    while(scanf("%s",str))
    {
        if(strcmp(str,"0")==0)return 0;
        ln=strlen(str);
    c=0;
    for(i=0;i<ln;i++)
    {
        r=(str[i]+c-48)%17;
        c=r*10;
    }
    if(r==0)printf("1\n");
    else printf("0\n");
    }

}
