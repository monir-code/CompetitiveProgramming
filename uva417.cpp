#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ln,i,j,k,c=0,n,l,m;
    char str[100]="abcdefghijklmnopqrstuvwxyz";
//    char str[100]="abcde";
    n=1;
    ln=strlen(str);
    map<string,int>ma;

    for(i=0;i<ln;i++)
    {
        string st;
        st=str[i];
        ma[st]=n++;
    }

    for(i=0;i<ln-1;i++)
    {
        for(j=i+1;j<ln;j++)
        {
            string a,b,c,d,e,f;
            a=str[i];b=str[j];
            f=a+b;
            ma[f]=n++;
        }
    }
    for(i=0;i<ln-2;i++)
    {
        for(j=i+1;j<ln-1;j++)
        {
            for(k=j+1;k<ln;k++)
            {
               string a,b,c,d,e,f;
               a=str[i];b=str[j];c=str[k];
               f=a+b+c;
               ma[f]=n++;
            }
        }
    }



    // for(i=0;i<ln-4;i++)
    {
        for(j=0;j<ln-3;j++)
        {
            for(k=j+1;k<ln-2;k++)
            {
                for(l=k+1;l<ln-1;l++)
                {
                    for(m=l+1;m<ln;m++)
                    {
                        string a,b,c,d,e,f;
                        b=str[j];c=str[k];d=str[l];e=str[m];
                        f=b+c+d+e;
                        ma[f]=n;
                        n++;
                    }
                }
            }
         }
     }
      for(i=0;i<ln-4;i++)
    {
        for(j=i+1;j<ln-3;j++)
        {
            for(k=j+1;k<ln-2;k++)
            {
                for(l=k+1;l<ln-1;l++)
                {
                    for(m=l+1;m<ln;m++)
                    {
                        string a,b,c,d,e,f;
                        a=str[i];b=str[j];c=str[k];d=str[l];e=str[m];
                        f=a+b+c+d+e;
                        ma[f]=n;
                        n++;
                    }
                }
            }
         }
     }


    string sr;
    while(cin >> sr)
    cout << ma[sr] << endl;
}
