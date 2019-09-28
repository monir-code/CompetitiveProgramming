#include <bits/stdc++.h>
using namespace std;
long long pow (long long b,long long p)
{
    if(p==1)return b;
    else return b*pow(b,p-1);
}
int main()
{
    long long b,s,t,n,c,i,j,k,a;
    cin >> t;
    while(t--)
    {
        cin >> n;
        a=n;
        c=0;
        b=a;
        while(a>0)
        {
            a/=10;
            c++;
        }
       s=0;
       while(b>0)
       {
           a=b%10;
           a=pow(a,c);
           s+=a;
           b/=10;
       }
       if(s==n)cout << "Armstrong"<< endl;
       else cout << "Not Armstrong"<< endl;
    }
}
