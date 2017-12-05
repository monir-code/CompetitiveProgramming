#include <bits/stdc++.h>
using namespace std;
int main()

{
    string a, f;
    int ind = 0, i, j, t= 1;
    cin>>a;
    reverse(a.begin(), a.end());

   // cout<<a[0]<<endl;
    for( i= 0; i< a.size(); i++)
    {
         if(ind >= 6)
        {
            if(a[i] == '1')
            {
                t = -1;
                break;
            }
        }
        if(a[i] == '0')
        {
            ind++;
        }

    }
    if(t == -1)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
