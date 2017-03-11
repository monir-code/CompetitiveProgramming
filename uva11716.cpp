#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,i,j,k;
    double ln,l;
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        char ch[100010];
        gets(ch);
        ln=strlen(ch);
        l=sqrt(ln);
        ll c;
        if(l>(ll)l)printf("INVALID\n");

        else{
            c=0;
            for(i=0;i<l;i++)
            {
                for(j=0;j<ln;j++)
                {
                    if(j%(ll)l==c)printf("%c",ch[j]);
                }
                c++;
            }
            printf("\n");
        }
    }
}
