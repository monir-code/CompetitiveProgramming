#include<stdio.h>
int main()
{
    int a,b,i,j,n;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n))
          {
              if(n==0)break;
              a=0;
              for(i=1;i<=n/2;i++)
                {
                    if(n%i==0)
                        a+=i;
                }
                if(a==n)
                    printf("%5d  PERFECT\n",n);
                    else if(a>n)
                        printf("%5d  ABUNDANT\n",n);
                        else if(a<n)
                        printf("%5d  DEFICIENT\n",n);
          }
          printf("END OF OUTPUT\n");
          return 0;
}
