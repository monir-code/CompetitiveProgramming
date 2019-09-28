#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,n,i,j,k,ae,ss,de;
    double d,s,av,ar[1002],m;
    while(cin >> n&&n)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
            //ar[i]*=100;
            s+=ar[i];
        }
        av=s/n;
        //ae=av;
       // av=(double)ae/100;
        s=0;
        for(i=0;i<n;i++)
        {
            //ar[i]/=100;
            if(ar[i]>av)
            {

                d=ar[i]-av;
                d*=100;
                de=d;
                d=(double)de/100;
                s+=d;
            }
        }
        m=s;
        s=0;
        for(i=0;i<n;i++)
        {
           // ar[i]/=100;
            if(ar[i]<av)
            {
                d=av-ar[i];
                d*=100;
                de=d;
                d=(double)de/100;
                s+=d;
            }
        }
        if(s<m)s=m;
        printf("$%.2lf\n",s);
    }
}
