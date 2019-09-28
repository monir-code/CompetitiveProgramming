#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long H(int n){
       long long r = 0;
              ll a,b,c;
       a=n;
     for( int i = 1; i <= n; i++){
            if((n/i)<i)
            return r;
       r+=n/i;
        if((n/i)<=i)return r;
       b=n/(i+1);
       c=a-b;
       r+=(c*i);
       //cout << r << endl;
       a=b;
     }
    return r;
}
int main()
{
     ll a,n,b,c;
     cin >> n;
     for(int i=0;i<n;i++)
     {
         cin >> a;
         b=H(a);

         cout << b << endl;
     }
}
