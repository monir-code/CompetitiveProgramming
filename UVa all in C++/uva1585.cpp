#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,t,c,i,s,ln,j,k;
    char str[100];
    cin >> t;
    getchar();
    for(a=0;a<t;a++)
    {
        gets(str);
        ln=strlen(str);
        b=0;
        s=0;
        for(i=0;i<ln;i++)
        {
            if(str[i]=='O')
            {
                b++;
                s+=b;
            }
            else b=0;
        }
        cout << s << endl;
    }
}
