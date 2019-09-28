#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,i,j,k,s;
    while(scanf("%llu",&n)!=EOF)
    {
        s=0;
        for(i=1;i<=n;i+=2)
        {
            s+=i;
        }
        s=(s*2-3)*3;
        cout << s << endl;
    }
}
