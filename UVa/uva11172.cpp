#include<stdio.h>
int main()
{
    long long a,b,t,i;
    while(scanf("%lld",&t)!=EOF)
    {
        for(i=0;i<t;i++){
        scanf("%lld%lld",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
             printf("<\n");
        else printf("=\n");
        }
    }
    return 0;
}
