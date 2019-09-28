#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n=1,a=0,b,ara[100000];

    while(scanf("%lld",&ara[a])!=EOF)
    {

        sort(ara,ara+a+1);
        if(a%2==0)
        cout << ara[a/2] << endl;
        else if(a&1)
        {
            b=(ara[a/2]+ara[a/2+1])/2;
            cout << b << endl;
        }
        a++;
    }
}
