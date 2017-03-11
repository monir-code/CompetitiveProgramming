#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,m,a,i,j,ara[550],s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            cin >> ara[i];
        sort(ara,ara+n);
        m=0;
        for(j=0;j<n;j++)
        {
            a=ara[0]-ara[j];
            if(a<0)a=-a;
            m+=a;
        }
       for(i=ara[1];i<=ara[n-1];i++)
       {  s=0;
           for(j=0;j<n;j++)
           {
               a=ara[j]-i;
               if(a<0)a=-a;
              s+=a;
           }
           if(s<m)m=s;
       }
        cout << m << endl;
    }


}
