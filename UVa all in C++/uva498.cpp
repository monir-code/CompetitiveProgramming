/*#include <stdio.h>
#define ll long long
ll parseLine(char *str, ll a[]) {
    ll i, neg = 1, g = 0, tmp = 0, idx = 0;
    for(i = 0; str[i]; i++) {
        if(str[i] >= '0' && str[i] <= '9')
            tmp = tmp*10 + str[i]-'0', g = 1;
        else {
            if(str[i] == '-') {
                neg = -1;
            } else if(str[i] == '+') {
                neg = 1;
            } else if(g) {
                a[idx++] = tmp*neg;
                g = 0, tmp = 0, neg = 1;
            }
        }
    }
    if(g)
        a[idx++] = tmp*neg;
    return idx;
}
ll pow(ll x, ll y) {
    if(y == 0)
        return 1;
    if(y&1)
        return pow(x*x, y>>1)*x;
    else
        return pow(x*x, y>>1);
}
int main() {
    char line[500];
    ll c[500], x[500];
    while(gets(line)) {
        ll ct, xt;
        ct = parseLine(line, c);
        gets(line);
        xt = parseLine(line, x);
        ll sum, i, j;
        for(i = 0; i < xt; i++) {
            sum = 0;
            for(j = 0; j < ct; j++)
                sum += pow(x[i], ct-j-1)*c[j];
            if(i)
                putchar(' ');
            printf("%d", sum);
        }
        puts("");
    }
    return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Pow(ll b,ll p)
{
    ll s,i,j;
    s=1;
    for(i=1;i<=p;i++)s*=b;
    return s;
}
ll a,b,c,d,i,j,k,l,ar[100000],br[100000],n,m,s,na;
int main()
{

//    freopen("in.txt","r",stdin);

    string ch;

    while(getline(cin,ch)){
        string ch1;
        vector< ll > v,ve;
        stringstream ss(ch);


        while(ss >> n)v.push_back(n);

        n=v.size();

        getline(cin,ch1);

        stringstream sa(ch1);

        while(sa >> na)ve.push_back(na);
        m=ve.size();
        j=0;
        while(1){
            s=0;
         if(j==m-1)break;
            for(i=0;i<n;i++){
            s+=(v[n-1-i]*Pow(ve[j],i));

            }
            printf("%lld ",s);
            j++;
        }
        s=0;
        for(i=0;i<n;i++)
        s+=(v[n-1-i]*Pow(ve[j],i));
        printf("%lld\n",s);
    }

}
