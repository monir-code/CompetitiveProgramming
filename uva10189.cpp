#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,c[105][105],a=0;
    char ara[105][105];
    while(scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0)return 0;
        for(i=0,j=0;j<=m+1;j++)
            ara[i][j]='0';
        for(j=0,i=0;i<=n+1;i++)
            ara[i][j]='0';
        for(i=n+1,j=1;j<=m+1;j++)
            ara[i][j]='0';
        for(i=1,j=m+1;i<=n+1;i++)
            ara[i][j]='0';
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin >> ara[i][j];
                c[i][j]=0;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(ara[i][j+1]=='*')c[i][j]++;
                if(ara[i+1][j+1]=='*')c[i][j]++;
                if(ara[i+1][j]=='*')c[i][j]++;
                if(ara[i+1][j-1]=='*')c[i][j]++;
                if(ara[i][j-1]=='*')c[i][j]++;
                if(ara[i-1][j-1]=='*')c[i][j]++;
                if(ara[i-1][j]=='*')c[i][j]++;
                if(ara[i-1][j+1]=='*')c[i][j]++;
            }
        }
            if(a!=0)cout << endl;
                a++;
        cout << "Field #" << a << ':'<< endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(ara[i][j]=='*')
                    cout << ara[i][j];
                else
                cout << c[i][j];
            }
            cout << endl;
        }
    }
}
