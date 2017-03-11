#include <bits/stdc++.h>
using namespace std;
#include<math.h>
int main()
{
    int i,a,b,v,c,d,ar[10000],j,s,n;
    ar[0]=2;
    a=1;
    for(i=3;i<=5003;i+=2)
    {
        c=1;
        s=sqrt(i);
        for(j=3;j<=s;j++)
        {
            if(i%j==0)
            {c=0;
            break;
            }
        }
        if(c==1)
        {
            ar[a]=i;
            a++;
        }
    }

   while(cin >> n)
   {
       if(n==0)return 0;
       i=0;
       c=0;
       while(ar[i]<=n/2)
       {
           s=0;
           for(j=i;s<n;j++)
           {
               s+=ar[j];
           }
           if(s==n)c++;
           i++;
       }
       s=sqrt(n);
       d=1;
       if(n%2==0)d=0;
       if(n==2)d=1;
       for(i=3;i<=s;i++)
       {
           if(n%i==0)
           {d=0;
           break;}
       }
       if(d==1)c++;
       cout << c << endl;
   }
}











