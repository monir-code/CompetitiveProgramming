#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[22];
    int ara[22],i,j,k,ln,a,b;
    while(gets(ch))
    {
        ln=strlen(ch);
        a=0;
        i=0;
        b=0;
        for(i=0;i<ln;i++)
        {
            if(ch[i]=='B'||ch[i]=='F'||ch[i]=='P'||ch[i]=='V')
                ara[a]=1;
           else if(ch[i]=='C'||ch[i]=='G'||ch[i]=='J'||ch[i]=='K'||ch[i]=='Q'||ch[i]=='S'||ch[i]=='X'||ch[i]=='Z')
                ara[a]=2;
           else if(ch[i]=='D'||ch[i]=='T')
                ara[a]=3;
           else if(ch[i]=='L')
                ara[a]=4;
           else if(ch[i]=='M'||ch[i]=='N')
                ara[a]=5;
           else if(ch[i]=='R')
                ara[a]=6;
            a++;
           if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]=='H'||ch[i]=='W'||ch[i]=='Y')
                        a--;
           else if(a>1&&ara[a-1]==ara[a-2]&&ch[i-1]!='A'&&ch[i-1]!='E'&&ch[i-1]!='I'&&ch[i-1]!='O'&&ch[i-1]!='U'&&ch[i-1]!='H'&&ch[i-1]!='W'&&ch[i-1]!='Y')a--;
    }

        for(i=0;i<a;i++)
            cout << ara[i];
        cout << endl;
    }
}
