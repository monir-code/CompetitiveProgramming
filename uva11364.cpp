#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,a,b,i,j,k,ara[200],m,s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++)
            cin >> ara[i];
        sort (ara,ara+n);
       m=(ara[n-1]-ara[0])*2;
    cout << m << endl;
    }
}
