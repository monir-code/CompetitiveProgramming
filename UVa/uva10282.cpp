#include <bits/stdc++.h>
using namespace std;
    char a1[100001][11],b1[100001][11],c1[100001][11];

int main()
{
    long long n,a,b,c,d,i,j,k,l,ln;
    i=0;
    char ch[30];
    string ab,ac;
    map<string,string>m;
    while(gets(ch))
    {

        ln=strlen(ch);if(ln==0)break;
        j=0;
        while(ch[j]!=' ')
        {
            a1[i][j]=ch[j];
            j++;
        }
     ab=a1[i];
     j++;
     k=0;
     for(l=j;l<ln;l++)
        {
            b1[i][k]=ch[l];
            k++;
        }
        ac=b1[i];
        m[ac]=ab;

        i++;
    }
    n=i;
    i=0;
   while(gets(ch))
   {

       if(strlen(ch)==0)break;
       if(m[ch].length()==0)m[ch]="eh";
      cout << m[ch] << endl;
       i++;

   }
}
