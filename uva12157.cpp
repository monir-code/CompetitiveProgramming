#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ma(int n)
{
    n++;
    int i,j,k,a,b;
    a=n/30;
    b=n%30;
    if(b>0)a++;
    a*=10;
    return a;
}
int ja(int n)
{
    n++;
    int i,j,k,a,b;
    a=n/60;
    b=n%60;
    if(b>0)a++;
    a*=15;
    return a;
}
int main()
{
    ll m,j,a,b,c,n,i,k,l,t,ar[100],s,s1;
    scanf("%lld",&t);
   for(l=1;l<=t;l++)
    {

        cin >> n;m=0;j=0;
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
            m+=ma(ar[i]);
            j+=ja(ar[i]);
        }
        printf("Case %lld: ",l);
        if(m==j)cout << "Mile Juice ";
        else if(m<j)cout << "Mile ";
        else cout << "Juice ";
        if(m>j)m=j;
        printf("%lld\n",m);
    }

}
