#include<bits/stdc++.h>
using namespace std;
int prime[200];
bool v[710];
void sieve()
{
    int i,j,k;
    for(i=4;i<=710;i+=2)
        v[i]=true;
    for(i=3;i*i<=710;i+=2)
    {
        if(!v[i])
        {
            for(j=i*i;j<=710;j+=i+i)
            {
                if(!v[j])
                    v[j]=true;
            }
        }
    }
    prime[0]=2;
    k=1;
    for(i=3;i<=710;i+=2)
        prime[k++]=i;
}
int Pow(int a,int p)
{
    int x=a,res=1;
    while(p)
    {
        if(p&1)
            res=res*x;
        x=x*x;
        p>>=1;
    }
    return res;
}
int main()
{
    sieve();
    int T,n,sum,po,i,m;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        m=n;
        sum=1;
        for(i=0;prime[i]*prime[i]<=n;i++)
        {
            if(n%prime[i]==0)
            {
                po=0;
                while(n%prime[i]==0)
                {
                    po++;
                    n/=prime[i];
                }
                sum=sum*((Pow(prime[i],po+1)-1)/(prime[i]-1));
            }
        }
        if(n>1)
            sum=sum*((Pow(n,2)-1)/(n-1));
        printf("%d\n",sum-m);
    }
}
