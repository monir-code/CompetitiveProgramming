/*#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll a,b,c,d,m,n,i,j,k,l,br[10001],ar[10001],p,ln;
    //priority_queue < ll> ar;

    while(cin >> n >> m)
    {
        if(n==0&&m==0)
        {printf("%lld %lld\n",n,m);return 0;}
        j=0;
        k=0;
        for(i=0;i<n;i++)
        {
            cin >> a;
            if(a&1){ar[k]=a;k++;}
               else{br[j]=a;j++;}
        }
        sort(br,br+j);
        sort(ar,ar+k);
        reverse(ar,ar+k);
        p=0;
        ln=0;
       printf("%lld %lld\n",n,m);
        while(ln<n)
        {
           i=0;
           while(i<k)
           {
           if((ar[i]%m)==p){printf("%lld\n",ar[i]);
           ln++;
           if(ln==n)break;
           }
            i++;
           }
           i=0;
           while(i<j)
           {
           if((br[i]%m)==p){printf("%lld\n",br[i]);
           ln++;
           if(ln==n)break;
           }
            i++;
           }
           p++;
        }

    }
}*/
/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll a,b,c,d,m,n,i,j,k,l,br[10001],p,ln;
    priority_queue < ll> ar,cr;

    while(cin >> n >> m)
    {
        if(n==0&&m==0)
        {printf("%lld %lld\n",n,m);return 0;}
        j=0;
        k=0;
        for(i=0;i<n;i++)
        {
            cin >> a;
            if(a&1){ar.push(a);k++;}
               else{br[j]=a;j++;}
        }
        sort(br,br+j);

        p=0;
        ln=0;
       printf("%lld %lld\n",n,m);
        while(ln<n)
        {
           i=0;
           while(i<ar.size())
           {
           if((ar.top()%m)==p){printf("%lld\n",ar[i]);
           ln++;
           if(ln==n)break;
           }
            i++;
           }
           i=0;
           while(i<j)
           {
           if((br[i]%m)==p){printf("%lld\n",br[i]);
           ln++;
           if(ln==n)break;
           }
            i++;
           }
           p++;
        }

    }
}*/
//https://play.google.com/store/apps/details?id=com.infancyit.uvasolutions

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
struct mod
{
    int x;
    int m;

    mod(int a,int b)
    {
        x=a;
        m=b;
    }

};
vector<mod>ans;
int modu;

int comp(mod a,mod b)
{
    if(a.m==b.m)
    {
        int x,y;
        x=abs(a.x)%2;
        y=abs(b.x)%2;
        if(x==0 && y==1)
            return 0;
        if(x==1 && y==0)
            return 1;
        if(x==0 && y==0)
            return a.x<b.x;
        if(x==1 && y==1)
            return b.x<a.x;
    }
    return a.m<b.m;

}

int main()
{
  //  freopen("in.txt","r",stdin);
    int num,x,i,l;
    while(~scanf("%d %d",&num,&modu))
    {
        if(num==0 && modu==0)
        {
            printf("0 0\n");
            break;
        }
        l=num;
        ans.clear();
        while(l--)
        {
            scanf("%d",&x);
            ans.push_back(mod(x,x%modu));
        }
        sort(ans.begin(),ans.end(),comp);
        printf("%d %d\n",num,modu);
        for(i=0; i<ans.size(); i++)
            printf("%d\n",ans[i].x);
    }
    return 0;
}
