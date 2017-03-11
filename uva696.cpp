#include <bits/stdc++.h>
using namespace std;
int f(int x)
{
    if(x == 1) return 2;
    if(x == 2 || x == 3) return 4;
    return 0;
}
int main()
{
    int a,b,i,j;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)return 0;
        if(a==1||b==1)
            i=a*b;
        else if(a==2||b==2)
        {
            {
                i = (a*b)/2;
                i = int(i/4) * 4 + f(i%4);
            }
        }
        else {
            i=a*b+1;
            i/=2;
        }
        cout << i<<" knights may be placed on a " << a << " row " << b <<" column board."<<endl;

    }
}
