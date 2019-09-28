#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,a[10],b[10],c;
    while(scanf("%d",&a[0])!=EOF)
    {
        c=1;
        for(i=1;i<5;i++)
            cin >> a[i];
        for(i=0;i<5;i++)
            cin >> b[i];
        for(i=0;i<5;i++)
            if(a[i]==b[i])c=0;
            if(c==1)cout << "Y" << endl;
            else cout << "N" << endl;
    }
}
