#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, m;

    cin>>n;

    while(n--)
    {
        int each;

        cin>>each;
        //if()
        m= each;
        int man[each];

        for(int i = 0; i< each; i++)
        {
            cin>>man[i];
        }
        if(m ==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int temp = 0;
        for(int i = 0; i < m-1; i++)
        {
           // cout<<"i's value: "<<man[i] - man[i+1]<<endl;
            if(abs(man[i] - man[i+1]) == 1 || abs(man[i] - man[i+1]) == m-1)
            {
                continue;
            }
            else{
                temp = 1;
                //cout<<"every temp = 1"<<endl;
                break;
            }
        }
        if(temp == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
