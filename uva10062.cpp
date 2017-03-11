#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int a,b,ma,c[500],i,j,m,ln,k=0;
    while(gets(str))
    {
        if(k>0)
             printf("\n");
        k++;
      for(i=31;i<=128;i++)
          c[i]=0;
        ma=0;
        ln=strlen(str);

        for(i=31;i<=128;i++)
        {
            for(j=0;j<ln;j++)
            {
                if(str[j]==i){
                      c[i]++;
                }

            }
        }
        for(i=31;i<=128;i++)
        {
            if(ma<c[i])ma=c[i];
        }
       for(j=1;j<=ma;j++)
        {
            for(i=128;i>=31;i--)
            {
                if(c[i]==j){
                    printf("%d %d\n",i,j);
                }
            }
        }

    }
    return 0;
}
