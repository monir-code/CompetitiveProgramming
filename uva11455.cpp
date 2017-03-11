#include<stdio.h>
int main()
{
    long long t,a,k,c,b,d,i,j,ara[5];
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lld%lld%lld%lld",&ara[0],&ara[1],&ara[2],&ara[3]);
        if(ara[0]==ara[1]&&ara[0]==ara[2]&&ara[2]==ara[3])printf("square\n");
        else {
            for(i=0;i<3;i++)
            {
                for(j=i+1;j<=3;j++)
                {
                    if(ara[i]<ara[j])
                    {
                        ara[i]^=ara[j];
                        ara[j]^=ara[i];
                        ara[i]^=ara[j];
                    }
                }
            }
            if(ara[0]<ara[1]+ara[2]+ara[3]){
            if(ara[0]==ara[1]&&ara[2]==ara[3])
                printf("rectangle\n");
            else printf("quadrangle\n");
            }
            else printf("banana\n");

        }

    }
    return 0;
}
