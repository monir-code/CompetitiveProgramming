 #include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a,b,c,m,n,i,j,k,ara[10];
    while(scanf("%llu",&n))
    {
        if(n==0)return 0;

        a=(n*10)/9;
        if(n%9==0)printf("%llu %llu\n",a-1,a);
        else printf("%llu\n",a);

    }
}
/*
#include<stdio.h>
int main()
{
    unsigned long int n,x;
    while(scanf("%ld",&n)==1)
    {
    if(n==0)
    break;
    x=(n*10)/9;
    if(n%9==0)
    printf("%ld %ld\n",x-1,x);
    else
   printf("%ld\n",x);
                            }
}
*/
