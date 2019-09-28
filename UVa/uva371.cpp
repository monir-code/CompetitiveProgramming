#include<stdio.h>
long int cont(long int n)
{
    if(n==1)return 0;
    else if(n&1)
       return cont(3*n+1)+1;
    else return cont(n/2)+1;
}
void swp(int m,int n)
{
    long int a,b,i,j,c=0;
    if(m>n)
    {
        m^=n;
        n^=m;
        m^=n;
    }
    for(i=m;i<=n;i++)
    {
        if(i==1)
            j=3;
        else j=cont(i);
        if(j>c)
        {
            a=i;
            c=j;
        }
    }
    printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",m,n,a,c);
}
int main()
{
    long int a,b;
    while(1){
    scanf("%ld%ld",&a,&b);
    if(a==0&&b==0)break;
        else swp(a,b);
    }
    return 0;
}
