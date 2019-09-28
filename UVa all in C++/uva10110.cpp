#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,s,n;
    while(cin >> n)
    {
        if(n==0)return 0;
        s=0;
        a=1;
        while(s<n)
        {
            s+=a;
            a+=2;
        }
        if(s==n)cout << "yes" << endl;
        else cout << "no" << endl;
    }

}
