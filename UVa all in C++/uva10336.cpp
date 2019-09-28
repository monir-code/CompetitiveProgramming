#include <bits/stdc++.h>
using namespace std;
char ch[110][110],str[110][110],sr;
int a,b;
void abc(int x,int y)
{
    if(ch[x][y]!=sr)return;
    ch[x][y]=1;
    abc(x-1,y);
    abc(x,y+1);
    abc(x+1,y);
    abc(x,y-1);
}
int main()
{
   int m,n,a,b,c,i,j,k,l,s,po,nu;
   cin >> nu;
   for(a=1;a<=nu;a++)
   {
  for(i=0;i<=110;i++)
    ch[i][0]='0';
  for(j=0;j<=110;j++)
    ch[0][j]='0';

    scanf("%d%d",&m,&n);
    {
        getchar();
        for(i=1;i<=m;i++)
        {

            for(j=1;j<=n;j++){
                    str[i][j]=0;
                scanf("%c",&ch[i][j]);
            }
             getchar();
        }

    map<char,int>ma;
    char st;
    int max=0;
    for(st='a';st<='z';st++){
        s=0;
        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++)
             if(ch[i][j]==st){
                sr=st;
                abc(i,j);
                 s++;
              }
      ma[st]=s;
      if(s>max)max=s;
    }
   cout << "World #" << a << endl;
    for(i=max;i>0;i--)
    {
        for(st='a';st<='z';st++)
        {
            if(ma[st]==i) cout << st <<": "<< ma[st] << endl;
        }
    }

    }
   }
}
