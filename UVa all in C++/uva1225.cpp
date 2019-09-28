#include <bits/stdc++.h>
using namespace std;
char str[100000];
#define ll long long
int main()
{
    ll i,j,a,t,b,n,c,e,k,ch[12];
    cin >> t;
    for(j=1;j<=t;j++)
    {
        for(i=0;i<=10;i++)ch[i]=0;
          scanf("%lld",&n);
        a=0;
        for(i=1;i<=n;i++)
        {
            b=i;
            while(b>0){
                             e=b%10;
                            str[a]=e+48;
                            b/=10;
                            a++;
                       }
        }
        for(k=0;k<=9;k++){
            for(i=0;i<a;i++)
            {
                if((str[i]-48)==k)
                    ch[k]++;
            }
        }

          for(i=0;i<=8;i++)
            printf("%d ",ch[i]);
            printf("%d\n",ch[9]);
    }
}
