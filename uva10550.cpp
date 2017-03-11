#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,i,j,x,y,z;
    while(scanf("%d%d%d%d",&a,&b,&c,&d))
    {
        if(a==0&&b==0&&c==0&&d==0)
        return 0;
        b=b-a;
        c=c-a;
        d=d-a;
        if(b<0)b+=40;
        if(c<0)c+=40;
        if(d<0)d+=40;
        x=b;
        y=b-c;
        if(y<0)y+=40;
        z=d-c;
        if(z<0)z+=40;
         x=40-x;
         y=40-y;
         z=40-z;
        x*=9;
        y*=9;
        z*=9;
        i=1080+x+y+z;

        cout << i << endl;

    }
}
