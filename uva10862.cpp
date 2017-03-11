#include <bits/stdc++.h>
using namespace std;
    char aa[4003][100000];
int k=1;
void fibo()
{
       int a=0,b,c,d,m,ln,i,j,x,s,f,ln1,ln2,t;

    char st[100010]="0",ch[100010],sr[100010]="1";
           st[1]='\0';sr[1]='\0';
           ln=1;ln1=1;
         a=0;
         while(1){
        ln=strlen(st); ln1=strlen(sr);

    for(i=ln;i<ln1;i++)
            st[i]='0';
      st[ln1]='\0';
       j=0;
       c=0;
      for(i=0;i<ln1;i++)
      {
          s=(st[i]+sr[i]-96)+c;
          ch[i]=s%10+48;
          c=s/10;
      }

     while(c>0)
      {
          ch[i]=c%10+48;
          c/=10;
          i++;
      }
      ch[i]='\0';
     ln2=i;
    for(i=0;i<ln1;i++)st[i]=sr[i];st[ln1]='\0';
     for(i=0;i<ln2;i++)sr[i]=ch[i];sr[ln2]='\0';

     for(i=0;i<=ln2;i++)aa[k][i]=sr[i];
     reverse(aa[k],aa[k]+ln2);
         k++;
          a++;
    if(a==4002)break;
         }
   }

int main()
{
    int a;
    fibo();
    while(scanf("%d",&a))
    {
        if(a==0)return 0;
        a=a*2-1;
        if(a>0)printf("%s\n",aa[a]);
       else if(a==0)printf("1\n");
       else printf("0\n");

    }

}
