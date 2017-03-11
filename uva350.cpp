#include<stdio.h>
int main()
{
    int z,i,m,c,l,d,f,e,j,a,b;
     f=1;
    while(scanf("%d%d%d%d",&z,&i,&m,&l))
    {
        if(z==0&&i==0&&m==0&&l==0)return 0;

        c=(z*l+i)%m;
        l=c;
        d=c;
        e=0;
      while(1){
            l=(z*l+i)%m;
            e++;
            if(l==c)break;

        }
     printf("Case %d: %d\n",f,e);
     f++;
    }
    return 0;
}
