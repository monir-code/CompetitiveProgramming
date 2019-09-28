#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int a,i,j;
    while(scanf("%d",&a)!=EOF)
    {
        map<string,int>ma;
        map<string,int>::iterator it;
        pair<string,int>p;
        int ln;
        cin >> st;
        ln=st.length();
        for(i=0;i<ln-a+1;i++)
        {
            ma[st.substr(i,a)]++;
        }
        it=ma.begin();
        p=*ma.begin();
        do{
            if((*it).second>p.second)p=(*it);
        }while(ma.value_comp()(*it++,*ma.rbegin()));
        cout << p.first << endl;
    }
}
