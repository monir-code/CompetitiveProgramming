#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull ar[100000];
void num()
{
    ull i,j,k,s=0;
    for(i=1;i<100000;i++)
    {
        s+=i;
        ar[i+1]=s;
    }
}

int main()
{
  ull a,t,b,c,d,e,n,i,j,k,l;
  num();
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> n;
        printf("Case %llu: ",i);
        if(ar[n]%2==1)cout << ar[n]<<"/2"<< endl;
        else
        {  b=ar[n]/2;cout << b << endl;}
    }
}
