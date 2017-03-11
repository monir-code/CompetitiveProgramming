#include<stdio.h>
#include<math.h>
int main()
{
     long double y;
     long long i,t,x;
    (scanf("%lld",&t));
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&y);
        x=sqrt(y);
        printf("%lld\n",x);
        printf("\n");
    }
    return 0;
}

/*#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    int n;
        cin >> n;
    while(n-->0) {
        long double mm;
                cin >> mm;
                cout.precision(0);
                cout.setf(ios::fixed);
                cout << sqrt(mm) << endl;
    }

    return 0;
}
*/
