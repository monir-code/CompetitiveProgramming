#include<stdio.h>
int main()
{
    unsigned long long n,r,a,b,s,c,d,e,f,i,j,ara[101],ch[101];
    while(scanf("%llu%llu%llu",&n,&d,&r))
    {
        b=d;
        ara[101]={0};ch[101]={0};
        s=0;

        if(n==0&&d==0&&r==0)return 0;
            for(j=0;j<n;j++)
            scanf("%llu",&ara[j]);

            for(j=0;j<n;j++)
            scanf("%llu",&ch[j]);
          for(i=0;i<n-1;i++)
          {
              for(j=i+1;j<n;j++)
              {
                  if(ara[i]>ara[j])
                  {
                      ara[i]^=ara[j];
                      ara[j]^=ara[i];
                      ara[i]^=ara[j];
                  }
                  if(ch[i]<ch[j])
                  {
                      ch[i]^=ch[j];
                      ch[j]^=ch[i];
                      ch[i]^=ch[j];
                  }
              }
          }
            for(j=0;j<n;j++)
            {
                if(ara[j]+ch[j]>b)
                {
                     c=(ara[j]+ch[j])-b;
                     s+=(r*c);
                }


            }
              printf("%llu\n",s);

    }
}
