#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long s=0,n,a,i,j;
    char str[10];
   scanf("%lld",&n);
   for(i=0;i<n;i++)
   {
       scanf("%s",str);
       if(strcmp(str,"report")==0)
        printf("%llu\n",s);
       else {
            scanf("%llu",&j);
       s+=j;
       }
   }
}
