#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,i,j,k,l,t;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> a;
        getchar();
        cin >> b;
        getchar();
        cin >> c;
        cin >> d;
        getchar();
        cin >> e;
         getchar();
       cin >> f;
       if(d>a)e++;
       if(e>b)f++;
       j=c-f;
       if(j>130)cout << "Case #"<<i << ": Check birth date"<< endl;
       else if(j<0)cout <<"Case #" << i << ": Invalid birth date" << endl;
       else cout <<"Case #" << i << ": " << j <<endl;

    }
}
