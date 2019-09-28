#include<stdio.h>
int main()
{
    int n,i,j,ara[201][201],s,t,a,b,c,d;

    while(scanf("%d",&n)){
              if(n==0)return 0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            scanf("%d",&ara[i][j]);
         c=0;
         d=0;
        for(i=0;i<n;i++)
        {
            s=0;
            t=0;
            for(j=0;j<n;j++)
            {
                 s+=ara[i][j];
                 t+=ara[j][i];
            }

            if(s&1)
            {
                a=i;
                c++;

            }
             if(t&1)
            {
                b=i;
                d++;
            }

        }
         if(c==0&&d==0) printf("OK\n");

        else if(c==1&&d==1)printf("Change bit (%d,%d)\n",a+1,b+1);
        else printf("Corrupt\n");
    }
    return 0;
}
