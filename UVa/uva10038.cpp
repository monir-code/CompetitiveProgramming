#include<stdio.h>
int main()
{
    int ara[3001],i,j,k,a,r,c[3000];

   while(scanf("%d",&a)!=EOF){
      for(i=0;i<a;i++)scanf("%d",&ara[i]);
    r=1;
    for(i=0;i<a-1;i++)
    {
       c[i]=ara[i]-ara[i+1];
       if(c[i]<0)c[i]=-c[i];
    }
    for(i=0;i<a-2;i++)
    {
        for(j=i+1;j<a-1;j++)
            if(c[i]>c[j])
        {
            c[i]^=c[j];
            c[j]^=c[i];
            c[i]^=c[j];
        }
    }
    for(i=0;i<a-1;i++)
    {
        if(c[i]!=i+1){
             r=0;
             break;
        }
    }

    if(r==0)printf("Not jolly\n");
    else printf("Jolly\n");

}
   return 0;
}
