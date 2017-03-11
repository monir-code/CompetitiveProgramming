#include<stdio.h>
int main()
{
    int a,b,c;
    while((scanf("%d",&a))!=EOF)
    {
        scanf("%d",&b);
        c=2*a*b;
        printf("%d\n",c);
    }
    return 0;
}
