#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string>st;
    string s;
    while(cin>>s)
    {
        string p="";
        int l=s.size();
      //cout << l << endl;
        for(int i=0;i<=l;i++)
        {
            if(isalpha(s[i]))
            {
                p+=tolower(s[i]);
            }
            else if(p!="")
            {
                st.insert(p);
                p="";
            }
        }
    }
    for( set<string>::iterator it=st.begin();it!=st.end();it++)
        cout << *it << endl;
}
