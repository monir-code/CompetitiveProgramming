#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[110][110];
    int ara[200];
    int a,b,c,d,m,ln,i,j,x,s;
    a=1;
    scanf("%s",str[0]);
    m=strlen(str[0]);
    while(scanf("%s",str[a]))
    {
        if(str[a][0]=='0')break;
        ln=strlen(str[a]);
        if(ln>m)m=ln;
        a++;

    }

      for(i=0;i<a;i++)
      {
          ln=strlen(str[i]);
          reverse(str[i],str[i]+ln);
      }
      for(i=0;i<a;i++)
      {
          ln=strlen(str[i]);
          for(j=ln;j<m;j++)
          {
              str[i][j]='0';
          }
      }

      c=0;
      x=0;
      for(i=0;i<m;i++)
      {
          s=c;
          for(j=0;j<a;j++)
          {
              s+=(str[j][i]-48);

          }
          ara[x]=s%10;
          c=s/10;
          x++;
      }
      while(c>0)
      {
          ara[x]=c%10;
          c/=10;
          x++;
      }
      reverse(ara,ara+x);
      for(i=0;i<x;i++)
        cout << ara[i];
      cout << endl;
}
