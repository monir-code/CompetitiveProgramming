/*#include <bits/stdc++.h>
using namespace std;
vector <int >ve[100000];
int ar[1000],c=0;

void dfs(int i,int n)
{
    ar[i]=true;
    int j,a=ve[i].size();
    for(j=0;j<a;j++)
    {
        if(!ar[ve[i][j]])dfs(ve[i][j],n);
    }
    c++;

    printf("%d",i);
    if(c%n==0)printf("\n");
    else printf(" ");

}

int main()
{
    int n,m,i,j,a,b;
    while(scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0)return 0;
        memset(ve,false,sizeof ve);
        memset(ar,false,sizeof ar);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);
            ve[b].push_back(a);
        }
        for(i=n;i>=1;i--)
        {
            if(!ar[i])dfs(i,n);
        }
    }
}


#define clr(a) memset(a,0,sizeof(a))
#define PB push_back
#define pi 3.1415926535897932384626433832795
int n,order[120][120],indegree[120],taken[120];

void topsort()
{
    vector<int>task;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(!taken[j] && !indegree[j])
            {
                taken[j]=1;
                task.PB(j);
                for(k=1;k<=n;k++)
                    if(order[j][k])
                            --indegree[k];
                break;
            }
        }
    }
    cout<<task[0];
    for(i=1;i<n;i++)
    cout<<" "<<task[i];
    cout<<endl;
    task.clear();
}

int main()
{
int a,b,i,m;
while(cin>>n>>m)
{
    if(n==0 && m==0)    break;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        order[a][b]=1;
        indegree[b]++;
    }
topsort();
clr(order);
clr(indegree);
clr(taken);
}
return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int ar[1000][110],br[1000],tr[1000],n,m;

void topo()
{
    queue<int>qu;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(!br[j]&&!tr[j])
            {
                tr[j]=1;
                qu.push(j);
                for(k=1;k<=n;k++)
                    if(ar[j][k])
                {
                    br[k]--;
                }
            }
        }
    }
    cout << qu.front();qu.pop();
    while(!qu.empty()){
    cout <<" " <<qu.front();
    qu.pop();
    }
    printf("\n");

}


int main()
{
    int i,j,a,b;
    while(scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0)return 0;
        memset(br,false,sizeof br);
        memset(ar,false,sizeof ar);
        memset(tr,false,sizeof tr);

        for(i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);
            ar[a][b]=1;
            br[b]++;
        }

        topo();

    }
}
