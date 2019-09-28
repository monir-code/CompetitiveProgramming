#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    cin>>s;

    int size = s.size()-1;

    int tone= 0;

    for(int i = 1; i <= size; i++)
    {
        if(s[i] == '1') tone++;
    }

    if(tone >= 1) cout << (size / 2)+1 <<endl;
    else cout << ceil((float)size /2) <<endl;
    return 0;
}
