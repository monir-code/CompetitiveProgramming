#include "bits/stdc++.h"
using namespace std;
#define ll long long
//vector<string>ma;
vector <ll> ve[10000];
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
        for(k=0;k<j;k++){
                //mm[ve[i][k]]--;
            if(!mm[ve[i][k]])dfs(ve[i][k]);
        }
    }
    printf("%lld\n",i);
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

           if(!mm[i])
           {
               dfs(i);
           }
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


#include <bits/stdc++.h>
using namespace std;
//#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <string>
#include <conio.h>

using namespace std;

typedef pair<string,int> namval;
typedef pair<int,string> valnam;
//typedef vector vi;

struct compareval
{
    bool operator()(const int& a, const int& b)
    {
        return a > b;
    }
};

int main()
{
    int vertex, edge,tc=0;
    string str, start, end;

    while(scanf("%d", &vertex)==1)
    {
        map<string,int> name_value;
        map<int, string> value_name;

        for(int i=0; i < vertex; i++)
        {
            cin>>str;
            //name_value.insert(namval(str, i));
            name_value[str]=i;
            value_name.insert(valnam(i, str));
        }

        scanf("%d", &edge);
        vector adjList;
        adjList.assign(vertex,vi());

        vi indegree = vi(vertex);
        indegree.assign(vertex,0);

        for(int i=0; i < edge; i++)
        {
            cin>>start;
            cin>>end;

            int u = name_value.find(start)->second;
            int v = name_value.find(end)->second;

            adjList.at(u).push_back(v);
            indegree[v] +=1;
        }

        priority_queue<int, vector<int>, compareval> pq;

        for(int i=0; i < vertex; i++)
        {
            if(indegree[i] == 0)
            {
                    pq.push(i);
            }
        }

        vi order = vi();

        while(!pq.empty())
        {
            int u = pq.top(); pq.pop();
            order.push_back(u);

            for(int i=0; i < adjList[u].size(); i++)
            {
                 int v = adjList[u][i];
                 indegree[v]--;
                 if(indegree[v]==0 )
                         pq.push(v);
            }
        }

        printf("Case #%d: Dilbert should drink beverages in this order: %s",++tc, value_name[order[0]].data() );
        for(int i = 1; i < order.size(); i++)
        {
            printf(" %s",  value_name[order[i]].data());
        }
        printf(".\n\n");
    }
    //getch();
return 0;
}
*/
