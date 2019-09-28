#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x1,y1,x2,y2,c,d,i,j;
    while(1)
    {
        cin >> x1 >> y1 >> x2 >> y2;
         if(x1==0&&y1==0&&x2==0&&y2==0)return 0;
        c=x1-x2;
        if(c<0)c=-c;
        d=y1-y2;
        if(d<0)d=-d;
        if(x1==x2&&y1==y2)
            cout << "0" << endl;
        else if(x1==x2||y1==y2)
            cout << "1" << endl;
        else if(c==d)
            cout << "1" << endl;
            else cout << "2" << endl;

    }
}
