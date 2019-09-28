#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i,j,t;
    string s;
    cin >> t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        stack<char>st;
        c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')'&&!st.empty()&&st.top()=='(')
                st.pop();
            else if(s[i]==']'&&!st.empty()&&st.top()=='[')
                st.pop();
            else c=1;
        }
        if(st.empty()&&c==0)printf("Yes\n");
        else printf("No\n");
    }

}
