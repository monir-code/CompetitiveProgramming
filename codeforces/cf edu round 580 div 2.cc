#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int an[n];
    for(int i = 0; i < n; i++)
    {
        cin>>an[i];
    }

    int m; cin>>m;
    int am[m];
    for(int i = 0; i < m; i++)
    {
        cin>>am[i];
    }
    sort(an, an+n);
    sort(am, am+m);
    cout<<an[n-1] <<" "<< am[m-1]<<endl;
    return 0;
}
