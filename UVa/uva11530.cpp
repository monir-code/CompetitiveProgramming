#include<stdio.h>
#include<string.h>
int main()
{
    long long j,c,t,a,ln,b,i,k;
    char str[101];
    scanf("%lld",&t);
    getchar();
    for(k=1;k<=t;k++)
    {
        gets(str);
        ln=strlen(str);
        c=0;
         for(j=0;j<ln;j++)
        {
            for(i='a';i<='r';i++)
            {
                if(str[j]==i)
            {
                if(i%3==0)c+=3;
                else if(i%3==1)c++;
                else c+=2;
            }
            }
            if(str[j]=='s'||str[j]=='z')
                c+=4;
            else if(str[j]==' ')c++;
            for(i='t';i<='y';i++)
            {
                if(str[j]==i)
                {
                    if(i%3==2)c++;
                    else if(i%3==0)c+=2;
                    else c+=3;
                }
            }
        }
    printf("Case #%lld: %lld\n",k,c);
    }
}
