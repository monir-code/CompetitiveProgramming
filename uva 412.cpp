#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[51],s;
    double p;
    while(scanf("%d",&n))
    {
        s=0;
        if(n==0)break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n;i++)
            s+=i;
            p=sqrt(s);
            if(p>0)
                printf("%lf\n",p);
            else
                printf("No estimate for this data set.\n");
    }
    return 0;
}
