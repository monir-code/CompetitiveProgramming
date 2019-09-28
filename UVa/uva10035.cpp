#include<stdio.h>
int main()
{
    unsigned long a,b,c,d,i,j,r,s;
    while(scanf("%lu%lu",&a,&b))
    {
        c=0;
        d=0;
        if(a==0&&b==0)return 0;
        while(a>0||b>0)
        {
            r=a%10+b%10+d;
            if(r>9)
            {c++;
             d=r/10;
            }
            else d=0;
            a/=10;
            b/=10;
        }
        if(c==0)printf("No carry operation.\n");
        else if(c==1)
            printf("1 carry operation.\n");
        else printf("%lu carry operations.\n",c);
    }
    return 0;
}

/*














#include<stdio.h>
int main()
{
    long int a,b;
    int count,c;
    while(scanf("%lu %lu",&a,&b)&&a!=0&&b!=0)
    {
       count=c=0;
       while(a||b)
            {
           c=(a%10+b%10+c)/10;
           a=a/10;
            b=b/10;
           count=count+c;
            }
          if(!count)
                     printf("No carry operation.\n");
                     else if(!(count^1))
                     printf("1 carry operation.\n");
                     else
                     printf("%d carry operations.\n",count);
            }
return 0;
}

*/
