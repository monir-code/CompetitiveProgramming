#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[100001],ln=0,i,a,b,c,j,ca[100001],str[100001];
   while(scanf("%d",&ara[ln])!=EOF)
    ln++;

    for(i=0;i<ln;i++)
         {
             c=1;
            for(j=i+1;j<ln;j++)
            {
                if(ara[i]==ara[j])
                {
                    str[j]=1;
                    c++;
                }

            }
            if(str[i]==0)printf("%d %d\n",ara[i],c);
         }

    return 0;
}
