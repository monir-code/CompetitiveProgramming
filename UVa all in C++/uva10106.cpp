
#include <bits/stdc++.h>
using namespace std;
    long long m,i,j,k,l,a,b,c,d,ln,ln1,s,r,kk[1000][1000],ara[5000],f;

int main()
{
    char str[1000],ch[1000];
    while(scanf("%s%s",str,ch)!=EOF)
    {
        for(i=0;i<1000;i++)
        {
            for(j=0;j<1000;j++)
                kk[i][j]=0;
        }
        ln=strlen(str);
        ln1=strlen(ch);
        a=0;
        m=0;
        for(i=ln-1;i>=0;i--)
        {
            for(k=0;k<a;k++)
            {
                kk[a][k]=0;
            }
            b=a;
            c=0;
            for(j=ln1-1;j>=0;j--)
            {
                r=(str[i]-48)*(ch[j]-48)+c;
                kk[a][b]=r%10;
                c=r/10;
                b++;
                if(m<b)m=b;
            }
            while(c>0)
            {
                kk[a][b]=c%10;
                c/=10;
                b++;
            if(m<b)m=b;
            }
            a++;
        }


        c=0;
        d=0;
        for(i=0;i<b;i++)
        {
            s=c;
            for(j=0;j<a;j++)
                s+=kk[j][i];
                ara[d]=s%10;
                c=s/10;
                d++;
        }
        while(c>0)
        {
            ara[d]=c%10;
            d++;
            c/=10;
        }
        reverse(ara,ara+d);
         f=0;
        for(i=0;i<d;i++)
        {
            if(ara[i]==0&&f==0)
                continue;
            if(ara[i]!=0)f=1;
             cout << ara[i];
        }
        if(f==0)cout << "0" ;
        cout << endl;

    }
}
