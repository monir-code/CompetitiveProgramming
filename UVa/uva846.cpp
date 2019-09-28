#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    ull a,t,b,e,c,s,d,i,j;
    scanf("%llu",&t);
    for(i=0;i<t;i++)
    {
            scanf("%llu%llu",&a,&b);
        if(a>b)c=a-b;
        else c=b-a;
        s=0;
        d=0;
        e=1;
        while(s<c)
        {
            s+=e;
            d++;
            if(s>=c)
            {
                break;
            }
            s+=e;
            d++;
            if(s>=c)
            {
                break;
            }
            else e++;

        }
         cout << d << endl;
    }
}
