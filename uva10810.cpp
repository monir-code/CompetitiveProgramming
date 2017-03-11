#include <bits/stdc++.h>
using namespace std;
//#include <cstdio>
#define ll long long

long long swa;
ll ar[500000],tp[500000];

void sort(ll l,ll r)
{
    if(r-l<=1)return;
    ll mid=(l+r)/2;

    sort(l,mid);
    sort(mid,r);

    ll i=l,j=mid,k=0;

    while(i<mid&&j<r)
    {
        if(ar[i]>ar[j])
        {
            tp[k++]=ar[j++];
            swa+=mid-i;
        }
        else tp[k++]=ar[i++];
    }
    while (i<mid)
    {
        tp[k++]=ar[i++];
    }
    while (j<r)
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
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    swa=0;
    sort(0,n);
    cout << swa << endl;

    }
}
