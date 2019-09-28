#include<stdio.h>
int main()
{
    long t,n,a,b,c,i,s;
    while((scanf("%ld",&t))!=EOF){
    while(t--)
    {
        s=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld%ld%ld",&a,&b,&c);
            s+=a*c;
        }
        printf("%ld\n",s);
    }
}
return 0;
}
