#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,s;
    //printf("%d\n",' ');
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        char ch[100];
        gets(ch);
        ll ar[100],a,b,c,i,j,k;
        j=0;
        for(i=0;i<19;i++){
            a=ch[i]-48;
            if(a<10&&a>=0){
            ar[j]=a;
            j++;
            }
        }
       s=0;
       for(i=0;i<16;i++){
                if(i%2==0)ar[i]*=2;
                //printf("%lld ",ar[i]);
                if(ar[i]>9)
                {
                    c=ar[i]%10;s+=c;ar[i]/=10;
                    s+=ar[i];

                }
                else
                s+=ar[i];
       }
       if(s%10==0)printf("Valid\n");
       else printf("Invalid\n");

    }
}
