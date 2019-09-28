#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
int main()
{
    ull a,b,c,ar[100],br[100],i,j,k,l;
    k=0;l=0;
    for(i=1;;i++)
    {
        a=0;
        for(j=1;j<=i;j++)
            a+=j;
        b=0;
        j=i;
        while(1)
        {
            b+=j;
            if(b>=a)break;
            j++;
        }
        //printf("%llu %llu\n",a,b);
        if(a==b){
            ar[l]=i;br[l]=j;
            l++;
        }

        if(l==2)break;
    }
    for(i=2;i<11;i++)
    {
        ar[i]=ar[i-1]*6-ar[i-2];
    }
     for(i=2;i<11;i++)
    {
        br[i]=br[i-1]*6-br[i-2]+2;
    }
    for(i=1;i<=10;i++)
    {
        printf("%10llu%10llu\n",ar[i],br[i]);
    }
}
