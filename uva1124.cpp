#include <bits/stdc++.h>
using namespace std;
char str[100000];
int main()
{
    long long i,ln;
    while(gets(str))
    {
        ln=strlen(str);
        for(i=0;i<ln;i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
}
