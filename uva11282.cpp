/*#include<bits/stdc++.h>
using namespace std;
long long dearrangement(long long n)
{
    if(n==0) return 1;
    if(n==1) return 0;
    else if(n==2) return 1;
    return (n-1)*(dearrangement(n-1)+dearrangement(n-2));
}
long long factorial(long long n)
{
    long long sum=1;
    for(long long i=1;i<=n;i++) sum*=i;
    return sum;
}
long long combination(long long a,long long b)
{
    long long sumA=factorial(a);
    long long sumB=factorial(b);
    long long sumC=factorial(a-b);
    long long total=sumA/(sumB*sumC);
    return total;
}
int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        long long sum=0;
        sum+=dearrangement(n);
        for(long long i=1;i<=m;i++)
        {
            sum+=combination(n,i)*dearrangement(n-i);
        }
        cout<<sum<<endl;
    }
    return 0;
}

*/


/*
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    long long dp[105], C[105][105] = {};
    int i, j, k;
    int n, m;
    dp[0] = 1, dp[1] = 0;
    for(i = 2; i < 100; i++)
        dp[i] = (i-1)*(dp[i-1] + dp[i-2]);
        //printf("%lld\n",dp[i]);

    C[0][0] = 1;
    for(i = 1; i < 10; i++) {
        C[i][0] = 1;
        for(j = 1; j <= i; j++){
            C[i][j] = C[i-1][j]+C[i-1][j-1];
           // printf("%lld\n",C[i][j]);
        }
    }
    while(scanf("%d %d", &n, &m) == 2) {
        long long ret = 0;
        for(i = 0; i <= m; i++)
            ret += C[n][i]*dp[n-i];
        printf("%lld\n", ret);
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[10000];
ll dg(ll n)
{
     if(n==0)return 1;
     if(n==1)return 0;
     if(n==2)return 1;
     return (n-1)*(dg(n-1)+dg(n-2));
}

ll fct(ll n)
{
    if(n<=1)return 1;
    return fct(n-1)*n;
}
ll ncr(ll n,ll r)
{
    ll a,b,c;
    a=fct(n);
    b=fct(n-r);
    c=fct(r);
    b*=c;
    c=a/b;
    return c;
}

int main()
{
    ll a,b,c,d,n,k,s=0,i,j;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        s=0;
        //s+=dg(a);
        for(i=0;i<=b;i++)
        {
            s+=ncr(a,i)*dg(a-i);

        }

        printf("%lld\n",s);
    }

}

