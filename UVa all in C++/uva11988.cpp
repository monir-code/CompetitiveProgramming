#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    char st[100001],ch[100001],dk[100001];
    long long i,j,k,ck,l,a,b,c,d,ln,cc;
    //cc=0;
    while(gets(st))
    {
        //cc++;
        ln=strlen(st);
        ck=0;
        a=0;
        b=0;
        for(i=ln-1;i>=0;i--)
        {
            if(st[i]=='[')
            {    a=i+1;
              j=a;
                //while(st[j]!='['&&st[j]!=']'){
             while(st[j]>='A'&&st[j]<='Z'||st[j]>='a'&&st[j]<='z'||st[j]=='_'){
                    printf("%c",st[j]);
                j++;
            }
            }
        }
        for(i=0;i<ln;i++)
        {
            if(st[i]=='['||st[i]==']'){
                    a=i;break;}
            printf("%c",st[i]);
        }
        for(i=a;i<ln;)
        {

            b=i;
            if(st[b]==']')
            {
                b++;
                    if(b>=ln)break;
             while(st[b]>='a'&&st[b]<='z'||st[b]>='A'&&st[b]<='Z'||st[b]=='_')
                {
                        printf("%c",st[b]);
                        //i=b-1;
                        b++;
                        i=b-1;
                        if(b>=ln)break;

                    }
                    b++;
                    if(b>=ln){i=ln-1;break;}
                }

            i++;
            if(i>=ln)break;
        }
          cout  << endl;
       //if(cc >15 )break;
    }
}
