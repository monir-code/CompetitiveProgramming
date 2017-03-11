#include<stdio.h>
#include<string.h>
int main()
{
    long long ln,i,j,k,n,m,a,s,b,c;
    char str[1112];
    while(gets(str))
    {
        if(strcmp(str,"0")==0)return 0;
        ln=strlen(str);
        m=0;
        s=0;
        for(i=0;i<ln;i++)
        {
            m=s*10+str[i]-48;
            s=m%11;
        }
        if(s==0)
        printf("%s is a multiple of 11.\n",str);
     else
        printf("%s is not a multiple of 11.\n",str);
    }
    return 0;
}
