#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[1001];
    int a,b,n,i,j,ln,c,d;
    while(scanf("%d%s",&a,str))
    {
        if(str[0]=='0'&&a==0)return 0;
        ln=strlen(str);
        c=0;
        d=0;
        for(i=0;i<ln;i++)
        {
            if(str[i]==0&&c==0||str[i]-48==a)
            {
                continue;
            }
          if(str[i]!=a&&str[i]!='0')c=1;
        if(c>0){
                printf("%c",str[i]);
                d=1;
            }
        }
        if(d==0)printf("0\n");
        else printf("\n");
    }
}
