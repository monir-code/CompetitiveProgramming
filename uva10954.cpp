/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a,b,n,t,ar[10000],i,j,br[10000],s;
    while(cin >> n)
    {
        if(n==0)return 0;
        for(i=0;i<n;i++)
            cin >> ar[i];
        sort(ar,ar+n);
        s=0;
        for(i=0;i<n;i++)
        {
            s+=ar[i];
            br[i]=s;
        }
        s=0;
        for(i=1;i<n;i++)
        {
            s+=br[i];
        }
        cout << s << endl;
    }
}*/
/*
#include <bits/stdc++.h> // this technique works on codeblocks
using namespace std;
int main()
{
    long long n;
    while(cin>>n && n)
    {

        priority_queue<long long, vector<long long>, greater<long long> > q;
        long long temp,sum=0,x=0;
        while(n--)
        {
            cin >> temp;
            q.push(temp);
        }
        while(q.size()>1)
        {
            x=q.top();q.pop();
            x+= q.top(); q.pop();
            sum+= x;

            q.push(x);
        }
        cout << sum<<endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(scanf("%lld",&n))
    {
        if(n==0)return 0;
    priority_queue<long long, vector<long long>, greater<long long> > q;
   //priority_queue<long long>q;
        long long a,b,c,d,i,s=0,x=0;

        for(i=0;i<n;i++){
                cin >> a;
            q.push(a);
        }
       s=0;
       //x=0;
        while(q.size()>1)
        {
            x=q.top();
            q.pop();
            x+=q.top();
            q.pop();
            s+=x;
            q.push(x);
        }
       cout << s << endl;
    }
}


























