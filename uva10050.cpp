#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,n,p,j,s,ara[101],str[3660];
    cin >> t;
    while(t--)
    {
        cin >> n >> p;
        for(i=0;i<p;i++)
        {
            cin >> ara[i];
        }
        for(i=0;i<=n+1;i++)str[i]=0;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<p;j++)
            {
                if(i%ara[j]==0)str[i]=1;
            }
        }
        for(i=6;i<=n+1;i+=7){
            str[i]=0;
            str[i+1]=0;
        }
        s=0;
        for(i=1;i<=n;i++)
            if(str[i]!=0)s++;
        cout << s << endl;

    }
}
