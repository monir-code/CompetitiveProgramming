#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define cover(a,b) memset(a,b,sizeof(a))

char ar[200000002],br[6000];
void hum()
{
    ull i,j,k;
    for(i=2;i<=200000000;i*=2){
        ar[i]='1';
            }
    for(i=3;i<=200000000;i*=3){
        ar[i]='1';
            }
    for(i=5;i<=200000000;i*=5){
        ar[i]='1';
            }
    for(i=7;i<=200000000;i*=7){
        ar[i]='1';
            }
    for(i=6;i<=200000000;i*=6){
        ar[i]='1';
            }
    for(i=10;i<=200000000;i*=10){
        ar[i]='1';
            }
    for(i=14;i<=200000000;i*=14){
        ar[i]='1';
            }
    for(i=15;i<=200000000;i*=15){
        ar[i]='1';
            }
    for(i=21;i<=200000000;i*=21){
        ar[i]='1';
            }
    for(i=36;i<=200000000;i*=36){
        ar[i]='1';
            }

    for(i=30;i<=200000000;i*=30){
        ar[i]='1';
            }
    for(i=42;i<=200000000;i*=42){
        ar[i]='1';
            }
    for(i=105;i<=200000000;i*=105){
        ar[i]='1';
            }
    for(i=210;i<=200000000;i*=210){
        ar[i]='1';
            }
}

int main()
{
     printf("uyjgt\n");
     ull i;

    cover(ar,false);
    ll j,k;
    hum();
    k=0;
    for(i=2;i<=200000000;i++)
    {
       if(ar[i]=='1'){printf("%llu ",i);k++;}
    }
    printf("jh %llu\n",k);

}
