#include <bits/stdc++.h>
using namespace std;

#include<string>
int main()
{
    char str[100],ch;
    int i,j,c,ln,a,b;
    while(1)
    {
        c=0;
        gets(str);
        if(str[0]=='#')return 0;
        ln=strlen(str);
        for(i=ln-2;i>=0;i--)
        {
            if(str[i]<str[i+1])
            {
                c=1;
                for(a=i;a<ln-1;a++)
                {
                    for(b=a+1;b<ln;b++)
                        if(str[a]>str[b])
                    {
                        ch=str[a];
                        str[a]=str[b];
                        str[b]=ch;
                    }
                }
                for(j=i;j<ln-1;j++)
                {
                    if(str[i]<str[j+1])
                    {
                         ch=str[i];
                         str[i]=str[j+1];
                         str[j+1]=ch;
                         break;
                    }
                }
                break;
            }
        }
        if(c==1)printf("%s\n",str);
        else printf("No Successor\n");
    }
}
