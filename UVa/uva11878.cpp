#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    int a,t,b,c,i,ln,j=0,k,m,d;
    char str[20];
    t=100;
     while(gets(str))
    {

        a=0;
        i=0;
        ln=strlen(str);
        while(1)
        {
            if(str[i]=='+'||str[i]=='-')break;
            a=a*10+str[i]-48;
            i++;

        }
        d=0;
        if(str[i]=='+')d=1;
        i++;
        b=0;
        while(1)
        {
            if(str[i]=='=')break;
            b=b*10+str[i]-48;
           i++;
        }
        i++;
        c=0;

        while(i<ln)
        {
            c=c*10+str[i]-48;
            i++;
        }
       if(d==1)m=a+b;
       else m=a-b;
       if(m<0)m=-m;
       if(m==c)j++;
               if(strstr(str,"?")&&m==c) j--;

    }
            cout << j << endl;


}
