#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,i,j,k,t,n,l,p,q;
    scanf("%lld",&t);
    for(l=1;l<=t;l++)
    {
     if(l!=1)printf("\n");
    scanf("%lld%lld",&p,&q);

    printf("case #%lld\n",l);
    c=0;

    for(i=p;i<=q;i++)
    {
        a=i*i;

        ll ch[200];
        j=0;
        while(a>0)
        {
            ch[j]=a%10;
            a/=10;
            j++;
        }
        ch[j]='\0';
        reverse(ch,ch+j);
        k=1;
        n=j-1;
        if(i==9){printf("9\n");c=1;}
        while(k<n)
        {
            a=0;
            b=0;
            for(j=0;j<k;j++)
                a=a*10+ch[j];
            for(j=k;j<=n;j++)
                b=b*10+ch[j];

                if(a+b==i&&b>0)
                {
                    printf("%lld\n",i);c=1;
                    break;
                }
                k++;
        }
    }
    if(c==0)printf("no kaprekar numbers\n");
    }
}
