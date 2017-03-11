#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a[3],b[3],m[3],i,j,k,l,c,b1,x,y,z=1;
    scanf("%lld",&t);
    for(b1=1;b1<=t;b1++)
    {
        c=0;
        scanf("%lld%lld%lld%lld%lld%lld",&a[0],&a[1],&b[0],&b[1],&m[0],&m[1]);
        for(k=m[0];k<=m[1];k++){
                if(k%2==0){
        for(i=b[0];i<=b[1];i++)
        {
            if(i%(k/2)==0)c++;
        }
                }
        else{
            for(i=b[0];i<=b[1];i++)
                if(i%k==0)c++;
        }
        }
        c=c*(a[1]-a[0]+1);
        printf("Case %lld: %lld\n",z,c);
        z++;
    }
}
