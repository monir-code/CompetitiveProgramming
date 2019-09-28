#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i=1;
    char str[10];
    while(gets(str))
    {
        if(strcmp(str,"*")==0)return 0;
        if(strcmp(str,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        if(strcmp(str,"Umrah")==0)printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
}
