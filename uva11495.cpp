#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll ar[100001],tp[100001];
ll sw;

void sort(ll l ,ll r)
{
    if(r-l<=1)return;
    ll mid=(r+l)/2;

    sort(l,mid);
    sort(mid,r);
    ll i=l,j=mid,k=0;

    while(i<mid&&j<r)
    {
        if(ar[i]>ar[j])
        {
            tp[k++]=ar[j++];
            sw+=mid-i;
        }
        else tp[k++]=ar[i++];
    }
    while(i<mid)
    {
        tp[k++]=ar[i++];
    }
    while(j<r)
    {
        tp[k++]=ar[j++];
    }
    for(i=l;i<r;i++)
    {
        ar[i]=tp[i-l];
    }

}

int main()
{
    ll n;
    while(cin >> n&&n){
                sw=0;

    for(int i=0;i<n;i++)cin >> ar[i];
    sort(0,n);
     if(sw&1)cout << "Marcelo" << endl;
     else cout << "Carlos" << endl;
    }
}
