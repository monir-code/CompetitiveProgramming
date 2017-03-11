#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[20],c=0,d=0,i,e=0,j=0;
    cout <<"Lumberjacks:" << endl;
    scanf("%d",&t);
    while(t--)
    {
        c=0;d=0;
        for(i=0;i<10;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<9;i++)
        {
            if(a[i]>a[i+1])c++;
           else if(a[i]<a[i+1])d++;
        }
        if(c==9||d==9)
            cout <<"Ordered" << endl;
            else cout <<"Unordered" << endl;
    }
}
