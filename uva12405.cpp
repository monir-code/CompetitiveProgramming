#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n,t,i,j;
    char str[110];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        cin >> n;
        c=0;
        for(j=0;j<n;j++)
         cin >> str[j];
         for(j=0;j<n;)
         {
           if(str[j]=='.')
           {
               c++;
               j+=3;
           }
           else j++;
         }
         cout << "Case " << i << ": " << c << endl;
    }
}
