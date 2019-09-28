#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,ar[1000],br[1000],t,n,s,i,j,m,ma,k,mm,maa;

    while(cin >> n)
    {
        if(n==0)return 0;
        s=0;
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
            s+=ar[i];
        }
        m=0;
        for(i=0;i<n/2+1;i++)
            m+=ar[i];
            mm=0;
        for(i=0;i<n/2;i++)
            mm+=ar[i];
                        printf("%lld\n",mm);

            if(m<mm)m=mm;
        ma=0;
        for(i=n-1;i>=n/2;i--)
            ma+=ar[i];
        maa=0;
        for(i=n-1;i>n/2;i--)
            maa+=ar[i];
            if(ma<maa)ma=maa;
        if(m<ma)m=ma;
        if(m<s)m=s;
        printf("%lld %lld %lld %lld\n",m,ma,mm,maa);
        m*=2;
        m-=s;
        if(m<0)m=-m;
        printf("%lld\n",s);
    }
}
