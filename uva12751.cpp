#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,k,x,i,j,a,s;
    cin >> t;
    for(i=1;i<=t;i++)
    {

        s=0;
        cin >> n >> k >> x;
        for(j=1;j<x;j++)
        {
            s+=j;
        }
        for(j=x+k;j<=n;j++)
            s+=j;

        cout << "Case " << i <<": " << s << endl;
    }
}
