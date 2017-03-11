#include <bits/stdc++.h>
using namespace std;
#include<string>

int mod(int n)
{
    int s=0,c=1,a;
    a=n;
    while(a>0)
    {
        s+=a%10;
        a/=10;
    }
    if(s==9)return 2;
    else if(s<9)return 1;
    if(s%9==0)
    {
         return 1+mod(s);
    }


}

int main()
{
    char str[1001];
    int i,j,k,a,b,c,s,ln;
    while(gets(str))
    {
        if(str[0]-48==0)return 0;
        s=0;
        c=0;
        ln=strlen(str);
        for(i=0;i<ln;i++)
            s+=str[i]-48;
            if(str[0]-48==9&&ln==1)c=1;
            else if(s%9==0&&s==9&&ln!=1)c=2;

        if(s%9==0&&s!=9)
        {
          c=mod(s);
        }
        if(c>0){
        printf("%s",str);
        cout << " is a multiple of 9 and has 9-degree "<< c << "." << endl;
        }
        else
        {
                    printf("%s",str);
                  cout << " is not a multiple of 9."<<endl;

        }
    }

}
