#include<stdio.h>
int main()
{
    long long t,k,ara[4],b,c,i,j;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld%lld%lld",&ara[0],&ara[1],&ara[2]);


            for(i=0;i<2;i++)
                for(j=i+1;j<3;j++)
                if(ara[i]>ara[j])
            {
                ara[i]^=ara[j];
                ara[j]^=ara[i];
                ara[i]^=ara[j];
            }
            if(ara[2]>=ara[0]+ara[1]||ara[0]<=0)
                printf("Case %lld: Invalid\n",k);

           else if(ara[0]==ara[1]&&ara[0]==ara[2])printf("Case %lld: Equilateral\n",k);

            else if(ara[0]==ara[1]||ara[1]==ara[2])
                 printf("Case %lld: Isosceles\n",k);

            else printf("Case %lld: Scalene\n",k);

    }
}
