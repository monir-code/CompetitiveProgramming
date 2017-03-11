#include<stdio.h>
#include<string.h>
int main()
{
    long long a,k,b,c,n,i,j,t[100],m,avg,tk[100],l;
    char ch[100][20],ch1[100][20],ch2[100][20];
    while((scanf("%lld",&n))!=EOF){

    for(i=0;i<n;i++){
    scanf("%s",ch[i]);
    t[i]=0;tk[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%s%lld%lld",ch1[i],&t[i],&m);
        for(l=0;l<n;l++){
        if((strcmp(ch[l],ch1[i]))==0){
        tk[l]=tk[l]-t[i];
        }
        }
        avg=t[i]/m;
        for(k=0;k<m;k++)
        {
            scanf("%s",ch2[k]);
            for(j=0;j<n;j++)
            {
                if((strcmp(ch[j],ch2[k]))==0){
                    tk[j]+=avg;
                }
            }
        }

    }
    for(i=0;i<n;i++)
        printf("%s %lld\n",ch[i],tk[i]);
    }
   return 0;
}
