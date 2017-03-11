#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a,n,i,j,k,l,s;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%lld",&n);
        for(i=n-48;i<=n;i++)
        {
            s=0;
            s=i;
            a=i;
            while(a>0)
            {
                s+=a%10;
                a/=10;
            }
            if(s==n){
                    s=i;
                  break;
            }
        }
        if(s>n)s=0;
        cout << s << endl;
    }
}
