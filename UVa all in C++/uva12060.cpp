/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    gcd(b,a%b);
}
int main()
{
    ll a,b,c,d,t,n,ar[1010],i,s,m,e,f;
    c=1;
    while(cin >> n && n)
    {
        s=0;
    for(i=0;i<n;i++)
        {
            cin >> ar[i];
            s+=ar[i];
        }
        a=s/n;
        b=s%n;
        //printf("%d\n",b);

        if(b<0)m=gcd(-b,n);
        else m=gcd(b,n);
        b/=m;n/=m;
        //if(m<0)b=-b;
        if(n<0)n=-n;
       cout << "Case " << c << ":" << endl;

        if(b==0)
        {
            if(a<0)
            {
                a=-a;
                cout <<"- "<< a << endl;
            }
           else cout << a << endl;
        }
        else if(a==0)
        {
           //printf("%d\n",b);
                if(b<0){
                        b=-b;
            if(n>99)
            {
            printf("%5lld\n",b);
            printf("- ---\n");
            printf("5%lld\n",n);
            }
            else if(n>9){
            printf("%4lld\n",b);
            printf("- --\n");
            printf("%4lld\n",n);
            }
            else { printf("%3lld\n",b);
            printf("- -\n");
            printf("%3lld\n",n);
            }
        }
        else{
                if(n>99)
                {
            printf("%3lld\n",b);
            printf("---\n");
            printf("%lld\n",n);
                }
                else if(n>9)
                {
            printf("%2lld\n",b);
            printf("--\n");
            printf("%lld\n",n);
                }
            printf("%lld\n",b);
            printf("-\n");
            printf("%lld\n",n);
        }
        }




        else {
                 e=a;
        f=0;
        if(e<0)e=-e;
        while(e>0)
        {
            f++;
            e/=10;
        }
        if(b<0)b=-b;
                if(a<0){
                        a=-a;
                        if(n>99)
                        {
            for(i=0;i<f;i++)printf(" ");
            printf("%5lld\n",b);
            printf("- %lld---\n",a);
           for(i=0;i<f;i++)printf(" ");
            printf("%5lld\n",n);
                        }
              else  if(n>9)
                        {
            for(i=0;i<f;i++)printf(" ");
            printf("%4lld\n",b);
            printf("- %lld--\n",a);
           for(i=0;i<f;i++)printf(" ");
            printf("%4lld\n",n);
                        }
                        else {
            for(i=0;i<f;i++)printf(" ");
            printf("  %lld\n",b);
            printf("- %lld-\n",a);
            for(i=0;i<f;i++)printf(" ");
            printf("  %lld\n",n);
                        }
        }
        else{
            if(n>99)
            { for(i=0;i<f;i++)printf(" ");
            printf("%3lld\n",b);
            printf("%lld---\n",a);
            for(i=0;i<f;i++)printf(" ");
            printf("%lld\n",n);
            }
            else if(n>9)
            { for(i=0;i<f;i++)printf(" ");
            printf("%2lld\n",b);
            printf("%lld--\n",a);
            for(i=0;i<f;i++)printf(" ");
            printf("%lld\n",n);
            }
            else {for(i=0;i<f;i++)printf(" ");
            printf("%lld\n",b);
            printf("%lld-\n",a);
            for(i=0;i<f;i++)printf(" ");
            printf("%lld\n",n);
            }
        }
        }
        c++;
    }
}*/

#include <cstdio>
#include <cmath>

using namespace std;

int gcd(int a , int b)
{
    if(b==0)
    return a;
    else return gcd(b,a%b);
}

int count (int y)
{
    int cnt =0;
    while(y!=0)
    {
        y=y/10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int n,m,a[500],b=1,c,d,i,j,k,l,x1,x2,x3,x4,x5,x6,x7,x8,x9,sum,up,down;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        sum =0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<n;j++)
        {
            sum = sum + a[j];
        }

        printf("Case %d:\n",b);

        x1 = sum / n;//vagfol ber korlam
        if(x1*n==sum)
        {
            if(x1<0)
            printf("- %d\n",-1*x1);
            else printf("%d\n",x1);
        }

        else
        {
            x2 = sum - (x1*n);//vagses ber korlam
            if(x2<0)
            x3 = gcd(-1*x2,n);// gcd
            else x3 = gcd(x2,n);

            up = x2/x3;
            down = n / x3;

            //printf("%d %d\n",up,down);

            x4 = count(up);
            x5 = count(down);
            x6 = count(x1);

            if(x1 >0)
            {
                for(int u =0;u<(x5+x6)-x4;u++)
                printf(" ");
                printf("%d",up);
                printf("\n");
                printf("%d",x1);
                for(k=0;k<x5;k++)
                printf("-");
                printf("\n");
                for(l=0;l<x6;l++)
                printf(" ");
                printf("%d",down);
                printf("\n");
            }

            if(x1<0)
            {

                for(int u =0;u<(x5+x6)-x4+2;u++)
                printf(" ");
                printf("%d",-1*up);
                printf("\n");
                printf("- %d",-1*x1);
                for(k=0;k<x5;k++)
                printf("-");
                printf("\n");
                for(l=0;l<x6+2;l++)
                printf(" ");
                printf("%d",down);
                printf("\n");
            }

            if(x1==0)
            {
                if(x2<0)
                {
                    for(int u =0;u<(x5+x6)-x4+2;u++)
                    printf(" ");
                    printf("%d",-1*up);
                    printf("\n");
                    printf("- ");
                    for(k=0;k<x5;k++)
                    printf("-");
                    printf("\n");
                    for(l=0;l<x6+2;l++)
                    printf(" ");
                    printf("%d",down);
                    printf("\n");
                }
                else if(x2>0)
                {
                    for(int u =0;u<(x5+x6)-x4;u++)
                    printf(" ");
                    printf("%d",up);
                    printf("\n");
                    for(k=0;k<x5;k++)
                    printf("-");
                    printf("\n");
                    for(l=0;l<x6;l++)
                    printf(" ");
                    printf("%d",down);
                    printf("\n");
                }
            }

        }
        b++;
    }
}
