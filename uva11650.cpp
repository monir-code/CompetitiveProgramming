#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,a,b,h,m,h1,m1;
    cin >> t;
    while(t--)
    {
        scanf("%d",&h);
        a=h;
        getchar();
        scanf("%d",&m);
        h1=11-a;
        m1=60-m;
        if(m1==60)
        {
            h1+=1;
            m1=0;
        }
        if(h1==0)h1=12;
        if(h1==-1)h1=11;
        if(h1<10&&m1>9)
        printf("0%d:%d\n",h1,m1);
        else if(h1<10&&m1<10)        printf("0%d:0%d\n",h1,m1);
        else if(h1>9&&m1<10)        printf("%d:0%d\n",h1,m1);
        else if(h1>9&&m1>9)        printf("%d:%d\n",h1,m1);


    }
}
