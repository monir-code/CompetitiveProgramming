*#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100000],ch[100000];
    int a[300],b[300],i,j,k,c,ln,ln1;
    while(scanf("%s%s",str,ch)!=EOF)
    {
        ln=strlen(str);
        ln1=strlen(ch);
      j=0;
    for(i=0;i<ln&&j<ln1;)
    {
        for(;j<ln1;j++)
        {
            if(str[i]==ch[j])
            {
                i++;
            }
        }
    }
     if(i==ln)cout << "Yes" << endl;
     else cout << "No" << endl;
    }
}






