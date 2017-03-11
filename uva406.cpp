#include <bits/stdc++.h>
using namespace std ;
#include<math.h>
#define ll long long
int main()
{
    ll a,b,m,c,i,j,s,d,ara[500];

    while(scanf("%lld%lld",&a,&b)!=EOF)
    {

        m=0;
        for(i=1;i<=a;i++)
        {
               c=1;
            if(i%2==0)c=0;
            s=sqrt(a);
            for(j=2;j<=s;j++)
            {
                if(i%j==0)
                {
                    c=0;
                }
            }
            if(i==1||i==2||i==5||i==7||i==11||i==13||i==17||i==23||i==19||i==29||i==31)c=1;
            if(i==3)c=1;
            if(c==1)
            {
                ara[m]=i;
                //cout << ara[m] << endl;
                m++;

            }

        }
         if(m&1&&(b*2-1<=m))
            {

                d=m;
                m/=2;
                cout << a<< " " << b <<": ";
                for(i=m-b+1;i<=m+b-2;i++)
                   cout <<ara[i] << " ";
                   cout << ara[m+b-1];
                cout << endl; cout << endl;
            }
        else if(m%2==0&&(b*2)<=m){

                d=m;
                m/=2;
            cout << a<< " " << b <<": ";
                for(i=m-b;i<=m+b-2;i++)
                    cout <<ara[i] << " ";
                    cout << ara[m+b-1];
                cout << endl; cout << endl;
            }
            else {
            cout << a<< " " << b <<": ";
                for(i=0;i<m-1;i++)
            cout <<ara[i] << " ";
            cout << ara[m-1];
                cout << endl; cout << endl;
            }

    }
}
