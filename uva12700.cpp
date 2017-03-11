#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b,d,w,a,t,n,i,j;
    char ch[1000];
    cin >> t;
    for(j=1;j<=t;j++)
    {
        b=0;
        w=0;
        d=0;
        a=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
                cin >> ch[i];
                if(ch[i]=='B')b++;
                else if(ch[i]=='W')w++;
                else if(ch[i]=='T')d++;
                else if(ch[i]=='A')a++;
        }
           if(a==n)cout << "Case " << j << ": ABANDONED" << endl;
        else if((b+a)==n)cout << "Case " << j << ": BANGLAWASH" << endl;
        else if((w+a)==n)cout << "Case " << j << ": WHITEWASH" << endl;
        else if(b==w)cout << "Case " << j << ": DRAW " << b << " " << d << endl;
        else if(b>w)cout << "Case " << j << ": BANGLADESH " << b << " - " << w << endl;
        else if(b<w)cout << "Case " << j << ": WWW " << w << " - " << b << endl;



    }
}
