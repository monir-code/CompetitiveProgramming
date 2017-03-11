/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l,d,ss,b,c;
    char st[100];
    double a,s;
    cin >> t;
    for(j=1;j<=t;j++)
    {
        s=0;
        for(i=0;i<2;i++)
        {
            cin >> a;
            s+=a;
        }
        s/=2;
        b=s;
        i=0;
        c=0;
        while(b>0)
        {
            if(c==3){
                st[i]=',';
                c=-1;
                i++;
            }
            st[i]=b%10+48;
            b/=10;
            c++;
            i++;
        }

     c=strlen(st);
    // reverse(st,st+c);
     printf("%s\n",st);




        a=s;
        d=1;
        ss=s;
        while(ss>0)
        {
            ss/=10;
            d*=10;

        }

        a/=d;
        printf("%0.2lf\n",a);

    }
}*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,i,j,k,l,d,ss,b,c,o;
    char st[100],ch[100];
    double a,s,di;
    cin >> t;
    for(o=1;o<=t;o++)
    {
        s=0;
        for(i=0;i<12;i++)
        {
            cin >> a;
            s+=a;
        }
        s/=12;

        d=s;
        di=s-d;
        di+=d%10;
        j=0;
        if(s>=10){
        while(d>0)
        {
            ch[j]=d%10+48;
            d/=10;
            j++;
        }
        ch[j]='\0';
       k=0;
       for(i=0;i<j;)
        {
            if(k%3==0&&k!=0){
                st[i]=',';j++;
                i++;
            }

            st[i]=ch[k];
            i++;
            k++;
        }
     reverse(st,st+j);
        st[j-1]='\0';

     c=strlen(st);

     printf("%lld $",o);if(c>0)printf("%s",st);
     printf("%.2lf\n",di);}
     else
     {
         printf("%lld $",o); printf("%.2lf\n",di);
     }
    }
}
