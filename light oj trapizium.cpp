#include <bits/stdc++.h>
using namespace std;
int main()
{

    double a, b, c, d, s, ara, j, k, t;
    int i;
    cin>>t;
    i=0;
    for(i = 1; i <= t;i++)
    {
        //i+=1;
        cin>>a>>b>>c>>d;

        s = (a+b+c+d) / 2;

        k=sqrt(  (s-a)*(s-c)* (s-a-d)*(s-a-b) );
		ara=((c+a)/abs(a-c)) * k;

		printf("Case %d: %lf\n",i,ara);


    }
    return 0;
}
//
//2
//6 5 12 5.0
//9 5 6 4
