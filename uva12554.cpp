#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,ab,m;
    string a[110],b[110],c[110];
    cin >> t;
    for(i=0;i<t;i++)
        cin >> a[i];
    b[0]=": Happy";
    b[1]=": birthday";
    b[2]=": to";
    b[3]=": you";
    b[4]=": Happy";
    b[5]=": birthday";
    b[6]=": to";
    b[7]=": you";
    b[8]=": Happy";
    b[9]=": birthday";
    b[10]=": to";
    b[11]=": Rujia";
    b[12]=": Happy";
    b[13]=": birthday";
    b[14]=": to";
    b[15]=": you";
    m=16;
    if(t>m)
    {
        m=t/16;
        m*=16;
        m+=16;
    }

    j=0;
    k=0;
    for(i=0;i<m;i++)
    {
        cout << a[j];
        cout << b[k];
        j++;
        k++;
        cout << endl;
        if(j==t)j=0;
        if(k==16)k=0;
    }

}
