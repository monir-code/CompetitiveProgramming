#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,i,j,k,r,ln,c,h,x,s,o,n,b,a;
    double C,H,O,N,S;
    char str[100];
    cin >> t;
    getchar();
    for(j=0;j<t;j++)
    {
        c=0;h=0;o=0;n=0;
        gets(str);
        ln=strlen(str);
        for(i=0;i<ln;)
        {
            if(str[i]=='C'||str[i]=='H'||str[i]=='O'||str[i]=='N')
            {
                x=i;
                b=i+1;
                a=0;
                s=0;
                while(str[b]>='0'&&str[b]<='9'&&b<ln)
                {
                    a=str[b]-48;
                    s=s*10+a;
                    b++;
           // cout << s << " DFSFD";
                }
                //cout << s << " ";
               i=b;
               if(str[x]=='C')
               {
                   if(s>0)c+=s;
                   else c++;
               }
               else if(str[x]=='H')
               {
                   if(s>0)h+=s;
                   else h++;
               }
               else if(str[x]=='O')
               {
                   if(s>0)o+=s;
                   else o++;
               } else if(str[x]=='N')
               {
                   if(s>0)n+=s;
                   else n++;
               }
            }
            else i++;
        }
        //cout << c << " " << h << " " << o << " " << n <<endl;
        C=c*12.01;
        H=h*1.008;
        O=o*16.00;
        N=n*14.01;
        S=C+H+O+N;
        printf("%.3lf\n",S);
    }
}
