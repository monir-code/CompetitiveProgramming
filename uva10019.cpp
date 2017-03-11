#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll s,n,d,e,a,b,c,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        b=0;
        c=1;
        a=n;
        while(n>0)
        {
            b=b+(n%10)*c;
            n/=10;
            c*=16;
        }
        d=0;
        e=0;
        while(a>0)
        {
            if(a&1)d++;
            a/=2;
        }
        while(b>0)
        {
            if(b&1)e++;
            b/=2;
        }
        cout << d << " " << e << endl;
    }

}
