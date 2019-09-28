#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,x1,x2,y1,y2,x3,y3,x4,y4,a,b,c,d,i;

    cin >> t;
    a=t-1;
    while(t--)
    {

        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
           if(t!=a)
        cout << endl;
        if(x2<x3||x4<x1||y4<y1||y2<y3||x1==x2||y1==y2||x3==x4||y3==y4||y1==y4||y2==y3||x2==x3||x1==x4)
        {
            printf("No Overlap\n");

        }
        else {
            if(x1<x3)x1=x3;
            if(y1<y3)y1=y3;
            if(x2>x4)x2=x4;
            if(y2>y4)y2=y4;
            if(x1==x2&&x2==y1&&y1==y2)printf("No Overlap\n");
            else cout << x1 << " " << y1 << " " << x2 << " " << y2<< endl;
        }
    }
}
