#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[110],ch[110][110],s[110][110];
    int a,b,c,ln,m,n,i,j,k,l,x;
    a=0;
    m=0;
     for(i=0;i<110;i++)
    {
        for(j=0;j<110;j++)
            s[i][j]=' ';
    }
    while(gets(str))
    {
        ln=strlen(str);
        for(i=0;i<ln;i++)
            s[a][i]=str[i];
        a++;
        if(m<ln)m=ln;
    }
   k=0;
    for(i=0;i<m;i++)
    {
        l=0;
        for(j=a-1;j>=0;j--){
            ch[k][l]=s[j][i];
            l++;
        }
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
            printf("%c",ch[i][j]);
        printf("\n");
    }


}
