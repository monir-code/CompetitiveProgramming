/*#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    string ar,br,cr;
    ull t,ln,a,b,c,d,i,j,k,l,s;
    cin >> t;
    getchar();
    for(l=1;l<=t;l++)
    {
        getline(cin,ar);
        ln=ar.size();
        //ar[3]='5';
        s=0;
     for(i=0;i<ln;i++)
        s+=ar[i]-48;
    c=(s%3);
    if(c==1)
     a=1;b=0;
     while(1){
        if(a){
        for(i=0;i<ln;i++){
            if(ar[i]=='y')continue;
            c=s-ar[i]+48;
            if(c%3==0)
            {
                ar[i]='y';
                a=0;
                b=1;
                s-=c;
               break;
            }
        }
        }
        if(i==ln)break;
      else {
        for(i=0;i<ln;i++){
            if(ar[i]=='y')continue;

            c=s-ar[i]+48;
            if(c%3==0)
            {
                ar[i]='y';
                b=0;
                a=1;
                s-=c;
                break;

            }
        }
        }
        if(i==ln)break;

     }
     printf("Case %llu: ",l);
     if(a==1)printf("T\n");
     else printf("S\n");



    }

}*/
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    string ar,br,cr;
    ull t,ln,a,b,c,d,i,j,k,l,e,s,cnt;
    cin >> t;
    getchar();
    for(l=1;l<=t;l++)
    {
        getline(cin,ar);
        ln=ar.size();
        s=0;
        c=0;
        d=0;
     for(i=0;i<ln;i++){
        s+=ar[i]-48;
        if(ar[i]-48==1||ar[i]-48==4||ar[i]-48==7)c=1;
        if(ar[i]-48==2||ar[i]-48==5||ar[i]-48==8)d=1;

     }
    e=(s%3);
    cnt=0;
    if((e==1&&c==1)||(e==2&&d==1)||e==0)
        {
             for(i=0;i<ln;i++){
                if((ar[i]-48)%3==0)cnt++;
        }

    }
  if((e==1&&c==1)||(e==2&&d==1))cnt++;
        printf("Case %llu: ",l);
        if(cnt%2==0)printf("T\n");
     else printf("S\n");
}
}
