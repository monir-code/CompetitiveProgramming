#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e=1,i,j,ara[10002],n,m,ch[10004],str[10004];
    while (scanf("%d%d",&n,&m))
    {
         if(n==0&&m==0)return 0;
        for(i=0;i<n;i++)
            cin >> ara[i];
        sort (ara,ara+n);

        for(i=0;i<m;i++)
            cin >> ch[i];
            for(i=0;i<m;i++)
                str[i]=0;
            for(i=n-1;i>=0;i--)
            {
                    for(j=0;j<m;j++){
                        if(ch[j]==ara[i])str[j]=i+1;
                   }
            }
            cout << "CASE# " << e<<":"<<endl;
            for(i=0;i<m;i++)
            {
                if(str[i]==0)cout <<ch[i] << " not found" << endl;
                else cout << ch[i] << " found at " << str[i] << endl;
            }
          e++;
    }
}
