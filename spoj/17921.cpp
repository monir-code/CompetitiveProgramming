#include<stdio.h>
int main()
{
    long a,b;
    scanf("%ld %ld",&a,&b);
    if((a==1 || a==0) && (b==1 || b==0))
        printf("%ld",a^b);
}
