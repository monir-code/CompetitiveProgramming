#include<stdio.h>
int gcd(int n,int m)
{
    int s,i,j,b;
    s=1;
    for(i=2;i<=n;i++)
    {
        if(n%i==0&&m%i==0)
            s=i;
    }
    return s;
}
int main()
{
    int i,g,j,s,n;

   while(scanf("%d",&n)){
        if(n==0)return 0;
   g=0;
   for(i=1;i<n;i++)
   for(j=i+1;j<=n;j++)
  {
       s=gcd(i,j);
       g+=s;

  }
  printf("%d\n",g);
}
}
