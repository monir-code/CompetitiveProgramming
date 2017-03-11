/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,i,j,k,h,m,h1,m1;
    while(scanf("%d%d%d%d",&h,&m,&h1,&m1))
    {
        if(h==0&&m==0&&h1==0&&m1==0)return 0;
        h=h1-h;

        m=m1-m;
        if(m<0)
        {m+=60;
         h--;
        }
         if(h<0)h+=24;
        h*=60;
        c=h+m;
        cout << c << endl;

    }
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    a=strcmp("sad","sad");
    printf("%d",a);
}
