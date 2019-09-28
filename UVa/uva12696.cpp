#include<stdio.h>
int main()
{
    int t,i,e;
    double a,b,c,d,f;
    scanf("%d",&t);
    e=0;
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        f=a+b+c;
         if(f<=125&&d<=7)
            {printf("1\n");
            e++;
            }
        else if(a<=56&&b<=45&&c<=25&&d<=7)
            {printf("1\n");
            e++;
            }

        else
                printf("0\n");
    }
    printf("%d\n",e);
}
