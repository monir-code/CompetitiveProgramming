#include<stdio.h>
int main()
{
    double a,s,m,n;
    int ara[51],p=1,i,t,x;
    while(scanf("%d",&t)){
            if(t==0)return 0;
        for(i=0;i<t;i++)
            scanf("%d",&ara[i]);
        s=0;
        for(i=0;i<t;i++)
          s+=ara[i];
        a=(double)s/(double)t;

        m=0;
        for(i=0;i<t;i++)
            {
                n=a-ara[i];
                if(n<0)n=-n;
                x=(int)n;
                if(n!=x)x++;
                m+=x;
            }
            m/=2;
            printf("Set #%d\nThe minimum number of moves is %.0lf.\n",p,m);
            printf("\n");
    p++;
    }
    return 0;
}
