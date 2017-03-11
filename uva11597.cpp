#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=1;
    while(cin >> a)
    {
        if(a==0)return 0;
        a/=2;
        printf("Case %d: %d\n",b,a);
        b++;
    }
}
