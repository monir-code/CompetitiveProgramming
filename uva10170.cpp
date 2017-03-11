#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
int main()
{
    ull a,b,s,c,d;
    while(scanf("%llu%llu",&a,&b)!=EOF)
    {
          s=0;
          while(s<b)
          {
              s+=a;
              a++;
          }
          a--;
          cout << a << endl;
    }
}
