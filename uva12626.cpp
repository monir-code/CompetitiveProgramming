#include<stdio.h>
#include<string.h>
int main()
{
    long long t,n,m,i,j,c[8],ln;
    char str[601];
    scanf("%lld",&t);
    getchar();
    while(t--)
    {

        gets(str);
        c[0]=c[1]=c[2]=c[3]=c[4]=c[5]=c[6]=0;
        ln=strlen(str);
        for(i=0;i<ln;i++)
        {
            if(str[i]=='M')c[0]++;
            else if(str[i]=='A')c[1]++;
            else if(str[i]=='R')c[2]++;
            else if(str[i]=='G')c[3]++;
            else if(str[i]=='I')c[4]++;
            else if(str[i]=='T')c[5]++;
        }
        m=c[0];
        c[1]/=3;
        c[2]/=2;
        for(i=1;i<=5;i++)
        {
            if(m>c[i])m=c[i];
        }
        printf("%lld\n",m);
    }
}
