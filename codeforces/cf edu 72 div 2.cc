#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        double a, b, c;
        cin>>a>>b>>c;
        double top = a+c;
        int result = 0;
//        while(top > b && top >=a)
//        {
//            result++;
//            --top;
//            ++b;
//        }

        if(a-b >c) cout<<(int)c+1<<endl;

        else if(a-b == c) cout<<(int)c<<endl;

        else if(c==0 && a>b)
            cout<<"1"<<endl;
        else if(c==0 && a<=b)
            cout<<"0"<<endl;

        else{
            if((int)ceil((top-b)/2)<0) cout<<"0"<<endl;
            else cout<<(int)ceil((top-b)/2)<<endl;
        }

    }
    return 0;
}
