#include<stdio.h>
#include<string.h>
long long prime[10000];
bool ch[46657];
long long k;
void sieve()
{
    long long i,j;
    for(i=4;i<=46656;i+=2)
        ch[i]=true;
    for(i=3;i*i<=46656;i+=2)
    {
        if(ch[i]==false)
        {
            for(j=i*i;j<=46656;j+=i+i)
            {
                if(ch[j]==false)
                    ch[j]=true;
            }
        }
    }
    prime[0]=2;
    k=1;
    for(i=3;i<=46656;i+=2)
        if(!ch[i])
        prime[k++]=i;
}
int main()
{
    sieve();
    long long T,f,M,N,i,j,s,p,cnt;
    scanf("%lld",&T);
    for(f=1;f<=T;f++)
    {
        scanf("%lld %lld",&M,&N);
        bool v[100001];
        memset(v,true,sizeof(v));
        for(i=0;prime[i]*prime[i]<=N && i<k;i++)
        {
            p=prime[i];
            s=M/p;
            s=s*p;
            for(j=s;j<=N;j=j+p)
            {
                if(j<M) continue;
                v[j-M]=false;
            }
        }
        cnt=0;
        for(i=0;prime[i]*prime[i]<=N;i++)
        {
            if(prime[i]>=M && prime[i]<=N)
                printf("%lld\n",prime[i]);
        }
        for(int i=0;i<N-M+1;++i)
        {
            if(v[i]==true && (i+M)!=1)
                printf("%lld\n",i+M);
        }
        printf("\n");
    }
}

