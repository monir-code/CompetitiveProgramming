#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    else gcd(b,a%b);
}
int main()
{
    int a,t,ar[1000],i,j,l,n,m,s;
    cin >> t;
    string st;
    getchar();
    while(t--)
    {
        n=0;
       getline(cin,st);
       stringstream ss(st);
       while(ss>>ar[n])n++;
       m=0;
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               s=gcd(ar[i],ar[j]);
               if(s>m)m=s;
           }
       }
       cout << m << endl;
    }
}
