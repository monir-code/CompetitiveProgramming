#include<stdio.h>
int main()
{
    int n,ara[1001],i,j,c;
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++){
                if(ara[i]>ara[j])
            {
                 c++;
            }
            }
        }
        printf("Minimum exchange operations : %d\n",c);

    }
    return 0;
}
