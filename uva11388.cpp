#include<stdio.h>
int main()
{
    int t;
    double b,a,g,c,l,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf",&g,&l);
        b=l/g;
        c=b-(int)b;
       if(c!=0)printf("-1\n");
       else
        printf("%.0lf %.0lf\n",g,l);
    }
    return 0;
}
