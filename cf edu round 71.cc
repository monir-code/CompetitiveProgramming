#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int b, p, f;
        cin>>b>>p>>f;
        int h, c;
        cin>>h>>c;
        int noofburger = b/2, maxmeat, minmeat, maxprice, minprice;
        if(h>=c)
        {
                maxprice = h;
                minprice = c;
                maxmeat = p;
                minmeat = f;
        }
        else
        {
                maxprice = c;
                minprice = h;
                maxmeat = f;
                minmeat = p;
        }
        if(p+f <= noofburger)
        {
            cout << maxmeat*maxprice + minmeat* minprice <<endl;
            continue;
        }
        else{
            if(noofburger <= maxmeat) {
                cout <<noofburger*maxprice<<endl;
                continue;
            }
            else{
                cout<<maxmeat*maxprice + abs(noofburger - maxmeat) * minprice<<endl;
                continue;
            }
        }
    }
    return 0;
}
