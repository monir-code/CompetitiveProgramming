#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,t,n,ara[100],l,i,j;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        c=0;
        cin >> n >> l;
        for(j=0;j<n;j++)
            cin >> ara[j];
        for(j=0;j<n-1;j++)
        {
            if(ara[j]>=ara[j+1])
                c=1;
        }
        if(ara[n-1]>l)c=1;
        if(c==1)cout << "Case "<< i << ": Second Player"<<endl;
        else cout << "Case "<< i << ": First Player"<<endl;
    }
}
