#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,p,i,j;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> n >> k >> p;
        j=(k+p)%n;
        if(j==0)j=n;
        printf("Case %d: %d\n",i,j);
    }
}
