#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,a,b,c,i,j,k,ara[100000],p,s;
    cin >> t;
    for(k=1;k<=t;k++)
    {
        cin >> n;
        ara[0]=n;
        a=n;
        c=1;
        while(1)
        {
            s=0;
            while(a>0)
            {
                b=a%10;
                s+=(b*b);
                a/=10;
            }
            a=s;
            ara[c]=a;
            c++;
             p=0;
             if(a==1)
             {
                 p=2;
                 break;
             }

            else {for(i=0;i<c-1;i++)
            {
                 if(a==ara[i])
                 {p=1;
                     break;
                 }

            }
            }
            if(p==1||p==2)break;
        }
        if(p==2)printf("Case #%lld: %lld is a Happy number.\n",k,n);
        else printf("Case #%lld: %lld is an Unhappy number.\n",k,n);
    }
}
