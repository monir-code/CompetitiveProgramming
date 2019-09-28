#include<stdio.h>
int main()
{
    long long a,i,j,ara[4];
    while(scanf("%lld%lld%lld",&ara[0],&ara[1],&ara[2]))
    {
        if(ara[0]==0&&ara[1]==0&&ara[2]==0)return 0;
        for(i=0;i<2;i++)

            for(j=i+1;j<3;j++)
            if(ara[i]<ara[j])
            {
                ara[i]^=ara[j];
                ara[j]^=ara[i];
                ara[i]^=ara[j];
            }
            ara[0]=ara[0]*ara[0];
            ara[1]=ara[1]*ara[1];
            ara[2]=ara[2]*ara[2];
            if(ara[0]==ara[1]+ara[2])
               printf("right\n");
            else printf("wrong\n");
    }
}
