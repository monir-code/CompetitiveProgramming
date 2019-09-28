#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ar[100000],br[100000],i,j,k,l,a,b,c,d;

    char ch;
    while(scanf("%lld",&ar[0])!=EOF){
    i=1;
    while(1)
    {
        scanf("%lld",&ar[i]);ch=getchar();
        i++;a=i;
        if(ch=='\n')break;
    }
    i=0;
    while(1)
    {
        scanf("%lld",&br[i]);ch=getchar();
        i++;b=i;
        if(ch=='\n')break;
    }
    c=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(ar[i]==br[j]){c++;break;}
        }
    }
    d=0;
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            if(br[i]==ar[j]){d++;break;}
        }
    }
    if(c==0)printf("A and B are disjoint\n");
    else if(a==c&&b==d)printf("A equals B\n");
    else if(a==c&&b>d)printf("A is a proper subset of B\n");
    else if(a>c&&b==d)printf("B is a proper subset of A\n");
    else if(a>c&&b>d)printf("I'm confused!\n");
    }
}
