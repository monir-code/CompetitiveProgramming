#include "bits/stdc++.h"
using namespace std;
#define ll long long
//vector<string>ma;
vector <int> ve[10000];
//map<string,string>ma;
ll mm[100000];
queue<ll>qu;

void dfs(ll i)
{

    if(!mm[i])
    {
       // printf("oo ");
        mm[i]=1;
        ll k,j=ve[i].size();
        for(k=0;k<j;k++)
            if(!mm[ve[i][k]])dfs(ve[i][k]);
    }
    qu.push(i);
}


int main()
{
    ll n,m,i,j,c,d,e=1;
    while(scanf("%lld",&n)!=EOF)
    {
        getchar();
        memset(mm,false,sizeof mm);
        memset(ve,false,sizeof ve);
        //memset(qu,false,sizeof qu);
        //qu.clear();

        string st[100000];
        for(i=0;i<n;i++)
        {
             cin>>st[i];
        }
        scanf("%lld",&m);
        getchar();
        char ch[1000],ch1[10000];
        for(i=0;i<m;i++)
        {
            //printf("be ");
            scanf("%s %s",ch,ch1);

            for(j=0;j<n;j++){
                if(st[j]==ch)c=j;
                else if(st[j]==ch1)d=j;
            }
            ve[d].push_back(c);
        }

       for(i=0;i<n;i++)
       {
            //printf("sfd");

           if(!mm[i])dfs(i);
       }
       printf("Case #%lld: Dilbert should drink beverages in this order:",e);e++;
       while(!qu.empty())
       {
           ll a=qu.front();
           qu.pop();
           cout << " "<< st[a];
       }
       printf(".\n\n");
    }
}

