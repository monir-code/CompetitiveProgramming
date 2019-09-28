#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,c,d,i,j,ara[100000];
    while(scanf("%llu%llu",&a,&b)!=EOF)
    {
        if(a<2||b<2||a<b||a%b!=0)cout << "Boring!"<<endl;
        else {
        c=0;
        while(a%b==0)
        {
            ara[c]=a;
            c++;
            a/=b;
            if(a==1){
                    ara[c]=1;
                    c++;
            }

        }
        if(a==1)
        {
            for(i=0;i<c-1;i++)
                cout << ara[i] << " ";
            cout << ara[c-1] << endl;
        }
        else cout << "Boring!"<<endl;
    }
    }

}
