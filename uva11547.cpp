#include<stdio.h>
int main()
{
    long long t,i,a,b,c;
    while(scanf("%lld",&t)!=EOF){
        for(i=0;i<t;i++){
            scanf("%lld",&a);
        b=a*567;
        b/=9;
        b+=7492;
        b*=235;
        b/=47;
        b-=498;
        b%=100;
        b/=10;
        if(b<0)b=-b;
         printf("%lld\n",b);
        }
    }
    return 0;
}
