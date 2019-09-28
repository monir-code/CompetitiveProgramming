#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long a,b,c,i,j,k,m,n,s;
    string st,sr;
    while(cin >> m >> n)
    {
        map<string,ll>ma;
        for(i=0;i<m;i++)
        {
            cin >> st;
            scanf("%lld",&a);
            ma[st]=a;
        }
        for(i=0;i<n;i++){
        s=0;
        while(1){
            cin >> sr;
            s+=ma[sr];
            if(sr==".")break;
        }
        cout << s << endl;
        }

    }
}
