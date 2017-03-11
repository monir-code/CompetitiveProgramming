#include<stdio.h>
#include<math.h>
int main()
{
    char str[9];
    int n,b,s,c,a,i,j,k,r,t;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%s",str);
        s=0;
        for(i=2;i>=0;i--)
        {
            for(k='A';k<='Z';k++)
            {
                if(str[i]==k)
                {
                    b=2-i;
                    if(b==1)
                    s+=(k-65)*pow(26,b)+1;
                    else  s+=(k-65)*pow(26,b);
                }
            }

        }
        r=0;
       for(i=7;i>=4;i--)
       {
           r+=(str[i]-48)*pow(10,7-i);

       }
       r++;
       t=r-s;
       if(t<0)t=-t;
      if(t<=100)printf("nice\n");
      else printf("not nice\n");
    }
    return 0;
}
