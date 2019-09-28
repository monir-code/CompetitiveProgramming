#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,n,i,j,k,l,ar[100],s,m,ee;
    unsigned long long e,f;

    scanf("%lld",&n);

        if(n==0)printf("10\n");
        else if(n<10)printf("%lld\n",n);
        else{ j=0;
            a=n;
            while(1)
            {
               c=0;
                for(i=9;i>1;i--)
                {

                    if(a%i==0){
                        ar[j]=i;
                        a/=i;
                        j++;
                        c=1;
                       i++;
                    }
                }
                if(c==0||a==1)break;
            }
            if(c==0)printf("-1\n");
            else{
                    sort(ar,ar+j);
                e=0;
                for(i=0;i<j;i++)
                {
                    e=e*10+ar[i];
                }
                printf("%llu\n",e);
            }
    }

}


