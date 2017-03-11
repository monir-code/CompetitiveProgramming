#include <stdio.h>
#include <string.h>

int coins[]={1,5,10,25,50};
int safe[5][7500];

int dp(int i, int value)
{
    if(i>=5) return 0;
    if(safe[i][value]!=-1) return safe[i][value];
    int temp1,temp2;
    temp1=temp2=0;
    if(value-coins[i]==0) temp1=1;
    else if(value-coins[i]>0) temp1=dp(i,value-coins[i]);
    if(!(value-coins[i]<0)) temp2=dp(i+1,value);
    return safe[i][value]=temp1+temp2;
}

int main()
{
    int num;
    memset(safe,-1,sizeof(safe));
    while(scanf("%d",&num)!=EOF)
        {
            if(num!=0) printf("%d\n",dp(0,num));
            else printf("1\n");
        }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int ar[8000]={1,1,1,1,1};
    int coin[4]={5,10,25,50};
    int i,j,k,l;
    for(i=5;i<=8000;i++)
        ar[i]=ar[i-1];
    for(i=0;i<4;i++)
    {
        for(j=coin[i];j<=8000;j++)
            ar[j]+=ar[j-coin[i]];
    }
    int n;
    while(scanf("%lld",&n)==1)
    {
        printf("%lld\n",ar[n]);
    }
}
*/
