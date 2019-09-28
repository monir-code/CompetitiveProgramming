#include<stdio.h>
int main()
{
    double c,n,m,i,j,k,l;
    while(scanf("%lf%lf",&n,&m))
    {
        if(n==0&&m==0)return 0;
        c=1;
        k=n-m;

        for(i=2;i<=m;i++)
            c/=i;
        for(i=n;i>k;i--)
            c*=i;
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,m,c);
    }
}
