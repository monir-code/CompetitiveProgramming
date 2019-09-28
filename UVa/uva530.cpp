#include<stdio.h>
int main()
{
    double c,n,m,i,j,k,l;
    while(scanf("%lf%lf",&n,&m))
    {
        if(n==0&&m==0)return 0;
        c=1;
        if(m*2>n)m=n-m;
        for(i=1;i<=m;i++)
        {
            c/=i;
            c*=(n-i+1);
        }
        printf("%.0lf\n",c);
    }
}
