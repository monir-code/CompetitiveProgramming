/*#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if(n==1)return 1;
    else return n*(fact(n-1));
}
int main()
{
    int n,a,i,j,k,c,s,ara[100],b=0;
    while(scanf("%d",&a)!=NULL)
    {
        n=fact(a);
            for(i=2;n>0;i++)
            {
                ara[b]=0;
                c=1;
               // if(i%2==0||i%3==0||i%5==0)c=0;
                //if(i==2||i==3||i==5||i==7||i==11||i==13)c=1;
                s=sqrt(i);
                for(j=2;j<=s;j++)
                {
                    if(i%j==0)c=0;
                }
                if(c==1)
                {
                    while(n%i==0){
                        ara[b]++;
                        n/=i;
                    }
                    b++;
                }
            }

        printf("%d! = %d %d %d",a,ara[0],ara[1],ara[2]);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    long b,c,i,j,k,s,f,n,m;
    long a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,61,67,71,73,83,87,89,91,97};
    while(scanf("%ld",&n))
    {
        if(n==0)return 0;
        s=n;
        long ar[25]={0};
        while(n!=1)

        {
            i=n;
            j=0;

            while(i>1){
                    c=0;
            while(i%a[j]==0)
            {
                    i/=a[j];
                    c++;
            }
                ar[j]+=c;
                j++;
            }
        n--;
        }
        for(i=24;i>=0;i--)
        {
            if(ar[i]!=0)
               break;
        }
      j=i;
        printf("%3ld! =",s);
        if(j>=15)f=0;
        else f=15;
        for(i=0;i<=j;i++)
        {
            printf("%3ld",ar[i]);
            f++;
            if(f==15)
                printf("\n%6c",' ');
        }
        printf("\n");
    }
    return 0;
}





























