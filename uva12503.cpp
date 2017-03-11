#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ar[110],i,j,k,ln,s,a,b,c,d;
    char st[110][110];
    cin >> t;
    while(t--)
    {
        cin >> n;
        getchar();
        for(i=0;i<n;i++)
        {
            gets(st[i]);
            ar[i]=0;
            if(strcmp(st[i],"RIGHT")==0)ar[i]=1;
            else if(strcmp(st[i],"LEFT")==0)ar[i]=-1;
            else {
                    if(i==0)ar[i]=1;
            else{
                ln=strlen(st[i]);
                for(j=8;j<ln;j++)
                {
                    ar[i]=ar[i]*10+st[i][j]-48;

                }
                c=ar[i];
                c--;
                ar[i]=ar[c];
            }
            }
            //cout << ar[i] << endl;
        }
        s=0;
        for(i=0;i<n;i++)
        {
            s+=ar[i];
        }
        cout << s << endl;
    }
}
