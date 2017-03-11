/*#include<stdio.h>
char str[1136]={0},ch[1136];
void fact(char str,int n)
{
    int i=0,a;
    a=n-1;
    while(a>0)
    {
        str[i]*='a%10';
        i++;
        if(str[i]>9)
        a/=10;
    }
}
int main()
{
    int n,a,i,j;

    scanf("%d",&a);
     i=0;
     n=a;
    while(n>0)
        {
            str[i]=n%10;
              i++;
              n/=10;
        }
     fact(str,a);

}

*/
/*
#include <bits/stdc++.h>
using namespace std;
#include<string>
    long long m,i,j,k,l,a,b,c,d,ln,ln1,s,r,kk[1000][1000],ara[5000],f;
char apo(char str,char ch[1000])
{
     for(i=0;i<1000;i++)
        {
            for(j=0;j<1000;j++)
                kk[i][j]=0;
        }
        ln=strlen(str);
        ln1=strlen(ch);
        a=0;
        m=0;
        for(i=ln-1;i>=0;i--)
        {
            for(k=0;k<a;k++)
            {
                kk[a][k]=0;
            }
            b=a;
            c=0;
            for(j=ln1-1;j>=0;j--)
            {
                r=(str[i]-48)*(ch[j]-48)+c;
                kk[a][b]=r%10;
                c=r/10;
                b++;
                if(m<b)m=b;
            }
            while(c>0)
            {
                kk[a][b]=c%10;
                c/=10;
                b++;
            if(m<b)m=b;
            }
            a++;
        }


        c=0;
        d=0;
        for(i=0;i<b;i++)
        {
            s=c;
            for(j=0;j<a;j++)
                s+=kk[j][i];
                ara[d]=s%10;
                c=s/10;
                d++;
        }
        while(c>0)
        {
            ara[d]=c%10;
            d++;
            c/=10;
        }
        reverse(ara,ara+d);
      return ara;

}
int main()
{
    char str[1000],ch[1000];
    while(scanf("%s%s",str,ch)!=EOF)
    {
       printf("%")
    }
}


*/
#include <bits/stdc++.h>
using namespace std;

char f[10000]={0};
char factorial[1010][10000];

void multiply(int k){
int cin,sum,i;
int len = strlen(f);
cin=0;
i=0;
while(i<len){
 sum=cin+(f[i]–'0') * k;
f[i] = (sum % 10) + '0';
i++;
cin = sum/10;
}
while(cin>0){
f[i++] = (cin%10) + ‘0’;
cin/=10;
}
f[i]=”;
for(int j=0;j<i;j++)
factorial[k][j]=f[j];
factorial[k][i]=”;
}

void fac(){
int k;
strcpy(f,”1″);
for(k=2;k<=1000;k++)
multiply(k);
}

void print(int n){
int i;
int len = strlen(factorial[n]);
printf(“%d!\n”,n);
for(i=len-1;i>=0;i–){
printf(“%c”,factorial[n][i]);
}
printf(“\n”);
}

int main(){
int n;
factorial[0][0]=’1′;
factorial[1][0]=’1′;
fac();
while(scanf(“%d”,&n)==1){
print(n);
}
return 0;
}

