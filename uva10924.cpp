#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[21];
    int n,i,j,s,q,c,ln;
    while(gets(str))
    {
        c=1;
        s=0;
        ln=strlen(str);
        for(i=0;i<ln;i++)
        {
            for(j='a';j<='z';j++)
            {
                if(str[i]==j)s+=(j-96);
            }
            for(j='A';j<='Z';j++)
            {
                if(str[i]==j)s+=(j-38);
            }
        }
        if(s%2==0)c=0;

        if(s==2)c=1;
        q=sqrt(s);
        for(i=3;i<=q;i++)
        {
            if(s%i==0)c=0;
        }
        if(c==1)printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
