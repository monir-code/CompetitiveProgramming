#include <bits/stdc++.h>
using namespace std;
char ch[110][110];
int n;
void abc(int x,int y)
{
    if(x<0 || y<0 || x==n || y==n)
        return;
    if(ch[x][y]!='1')
        return;
   // if(ch[x][y]=='1')
        ch[x][y]='0';
    abc(x-1,y-1);
    abc(x-1,y);
    abc(x-1,y+1);
    abc(x,y+1);
    abc(x+1,y+1);
    abc(x+1,y);
    abc(x+1,y-1);
    abc(x,y-1);
}
int main()
{
    int i,j,cnt,k=1;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            gets(ch[i]);
        }
        cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(ch[i][j]=='1')
                {
                    abc(i,j);
                    cnt++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",k,cnt);
        k++;
    }
}
