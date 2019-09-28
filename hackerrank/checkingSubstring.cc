#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    cin>>str;

    string sub;

    cin>>sub;

    int szstr = str.size(), szsub = sub.size();

    int check = 0;

    for(int i = 0; i < sub.size(); i++)
    {
        int tmp = 0;
        for(int j =i; j < str.size(); j++)
        {
            if(sub[i] == str[j])
            {
                tmp++;
                check+=tmp;
            }

        }
        if(tmp == 0)
            break;

    }

    if(check>= sub.size()) cout<<"Yes"<<endl;

    else cout<<"No"<<endl;





    return 0;
}
