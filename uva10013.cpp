/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[1000000],br[10000000],cr[10000002];
int main()
{
    ll a,b,c,i,j,k,n,m,s;
    while(scanf("%lld",&n)!=EOF){
    for(k=0;k<n;k++)
    {
        scanf("%lld",&m);
        for(i=0;i<m;i++)
        {
            scanf("%lld%lld",&ar[i],&br[i]);
        }

        c=0;
        j=0;
        for(i=m-1;i>=0;i--)
        {
            s=ar[i]+br[i]+c;
            cr[j]=s%10;
            c=s/10;
            j++;
        }
        if(c>0){
            cr[j]=c;j++;
        }

        if(k!=0)printf("\n");
        c=0;
        for(i=j-1;i>=0;i--)
        {
            if(cr[i]>0)c=1;
            if(c==1)
            printf("%lld",cr[i]);
        }
            if(c==0)printf("0");
        printf("\n");

    }
    }
}
*/
/*
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int answer[1000005] = {0};
int main(){
  bool blank_line = 0;
  int N, M, num1, num2;
  while( scanf( "%d", &N ) != EOF ){
    for( int i = 0 ; i < N ; i++ ){
      scanf( "%d", &M );
      memset( answer, 0, sizeof(answer) );
      for( int j = M-1 ; j >= 0 ; j-- ){
        scanf( "%d%d", &num1, &num2 );
        answer[j] += num1+num2;
        answer[j+1] += answer[j]/10;
        answer[j] %= 10;
      }
      for( int j = 0 ; j < M ; j++ ){
        answer[j+1] += answer[j]/10;
        answer[j] %= 10;
      }
      if( answer[M] ) M++;

      if( blank_line ) printf( "\n" );
      blank_line = 1;

      for( int j = M-1 ; j >= 0 ; j-- )
        printf( "%d", answer[j] );
      printf( "\n" );
    }
  }
  return 0;
}


#include<stdio.h>
int a1[2000000],a2[2000000],a3[2000000];
int main()
{
long i,j,m,t,d,r;
while(scanf("%ld",&t)==1)
{
for(i=0;i<t;i++)
    {
    scanf("%ld",&m);
        {
        for(j=0;j<m;j++)
            {
            scanf("%d%d",&a1[j],&a2[j]);
            }
        r=0;
        for(j=m-1;j>=0;j--)
            {
            d=a1[j]+a2[j]+r;
            if(d>9)
                {
                a3[j]=d%10;
                r=1;
                }
            else
                {
                a3[j]=d;
                r=0;
                }
            }
        for(j=0;j<m;j++)
        printf("%d",a3[j]);
        printf("\n");
        if(i!=t-1)
        printf("\n");
        }
    }
}
}
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
//    freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);

    int N,M,aux;

    cin>>N;

    string s1(1000000,' ');
    string s2(1000000,' ');


    for(int i=0;i<N;i++){
        cin>>M;

        string sum(M,' ');

        for(int j=0;j<M;j++) cin>>s1[j]>>s2[j];

        aux=0;

        for(int j=M-1;j>=0;j--){
            aux+=(s1[j]-'0')+(s2[j]-'0');

            sum[j]=aux%10+'0';

            aux/=10;
        }

        if(i!=0) cout<<endl;
        cout<<sum<<endl;
    }
}
