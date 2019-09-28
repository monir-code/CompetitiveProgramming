#include<bits/stdc++.h>
using namespace std;
#define ll long long
    ll i,j,k,l,m,n,a,b,c,ar[1000001],br[1000001];

int main()
{
    while(cin >> m >> n)
    {
        if(m==0&&n==0)return 0;
        for(i=0;i<m;i++)cin >> ar[i];
        for(i=0;i<n;i++)cin >> br[i];


        c=0;
        i=0;
            for(j=0;j<n;)
            {
                if(ar[i]==br[j])
                {
                    j++;
                    c++;
                    i++;
                }
                else if(ar[i]<br[j]){
                    i++;
                }
                else j++;
                if(i>=m)break;
            }
        printf("%lld\n",c);

    }
}
