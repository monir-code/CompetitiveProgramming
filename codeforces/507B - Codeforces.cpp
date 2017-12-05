#include <bits/stdc++.h>
using namespace std;
int main()
{
    double i, a, b, x, y, r;

    cin>>r>>a>>b>>x>>y;

    double tmp;
    tmp = sqrt((a-x)* (a-x)+ (b-y)*(b-y));

    if(a ==x && b == y) cout<<"0"<<endl;
    else if(tmp <= 0) cout<<"1"<<endl;
    else
    {
        int val;
        val = ceil(tmp / (2*r));
        cout<<val<<endl;
        //co
    }




    return 0;
}
