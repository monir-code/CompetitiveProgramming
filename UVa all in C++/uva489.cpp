#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d,i,j,k,co,ns,s,kk,ln,ln1,l,m;

    while(scanf("%lld",&a))
    {
        if(a==-1)return 0;
        char st[100000],ar[100000],cr[100000],dr[100000];
        getchar();
        scanf("%s",st);
        scanf("%s",ar);
        ln=strlen(st);
        ln1=strlen(ar);
        b=0;

        k=0;kk=0;s=0;ns=0;
        for(i=0;i<ln1;i++)
        {
             c=1;
             co=0;
            for(l=0;l<k;l++)
            {
                if(ar[i]==cr[l])c=0;
            }
            for(l=0;l<kk;l++)
            {
                if(ar[i]==dr[l]){c=0;co++;}
            }
            if(co>0)ns++;
            if(c==1){
                    b=0;
            for(j=0;j<ln;j++)
            {
                if(ar[i]==st[j]){b++;
                }
            }
            s+=b;
            if(b==0)ns++;

             if(b>0)cr[k++]=ar[i];
             else dr[kk++]=ar[i];
            }
            if(s==ln){
                    printf("Round %lld\n",a);
                printf("You win.\n");
                break;
            }
            else if(ns==7){ printf("Round %lld\n",a);printf("You lose.\n");break;}
            else if(i==ln1-1){ printf("Round %lld\n",a);printf("You chickened out.\n");break;}
        }
    }
}
