#include <bits/stdc++.h>
using namespace std;
#define int int

int ab(char *st,int ar[])
{
    int ne=1,s=0,i,j,k,l,ba=0,g=0;

    for(i=0;st[i];i++)
    {

        if(st[i]>='0'&&st[i]<='9')s=s*10+st[i]-'0',g=1;
        else if(st[i]=='-')ne=-1;
        else if(st[i]=='+')ne=1;
        else if (g)
        {
            ar[ba++]=ne*s;
            s=0;ne=1;g=0;
        }
    }
    if(g)ar[ba++]=ne*s;
    return ba;
}
int pow(int b,int p)
{
    if(p==0)return 1;
    else if(p&1)return pow(b*b,p>>1)*b;
    else return pow(b*b,p>>1);
}

int main()
{
   int a,b,c,d,ar[1000],br[1000],s,n,m,i,j;

   char st[500],sr[500];

   while(gets(st))
   {
       n=ab(st,ar);
       gets(st);
       m=ab(st,br);

       for(i=0;i<m;i++)
       {
           s=0;
           for(j=0;j<n;j++)
           {
               s+=pow(br[i],n-1-j)*ar[j];
           }
           if(i)putchar(' ');
           printf("%d",s);

       }
      puts("");
   }







}

