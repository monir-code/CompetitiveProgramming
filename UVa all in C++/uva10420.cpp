#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    string st,sr;
    map<string,int>m;
    int t,a,b,c,d,i,j,k,l;
    cin >> t;
    while(t--)
    {
        cin >> st;
        getline(cin,sr);
        if(m[st])m[st]++;
        else {
            v.push_back(st);
            m[st]++;
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        cout << v[i] << " " << m[v[i]] << endl;
    }
}
