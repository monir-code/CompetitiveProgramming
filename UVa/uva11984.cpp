#include <bits/stdc++.h>
using namespace std;

int main()
{
    double c,f,a,b,i,k;
    int t,j;
    cin >> t;
    for(j=1;j<=t;j++)
    {
        cin >> c >> f;
        a=(9*c)/5+32;
        f+=a;
        c=((f-32)*5)/9;
       printf("Case %d: %.2lf\n",j,c);
    }
}
