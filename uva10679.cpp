#include <bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
    int t,n,i,a;
    char str[100001],ch[1001];
    cin >> t;
    while(t--)
    {
        scanf("%s",str);
        cin >> n;
        for(i=0;i<n;i++)
        {
            scanf("%s",ch);
            a=0;
            if(strstr(str,ch))a=1;
            if(a==1)
            cout << "y"<< endl;
            else cout << "n" << endl;
        }
    }
}
