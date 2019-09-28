#include<stdio.h>
int main()
{
    int a,b,d=1,c;
    while(scanf("%d",&a))
    {
        if(a<0)return 0;
        c=0;
        b=1;
        while(a>b)
        {
            b*=2;
            c++;
        }
        printf("Case %d: %d\n",d,c);
         d++;
    }

}
