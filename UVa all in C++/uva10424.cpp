#include<stdio.h>
#include<string.h>
int sum(char str[26])
{
    int a,b,s,ln,c[100],i,j;
     s=0;
        ln=strlen(str);
        for(j=0;j<ln;j++)
        {
            for(i='a';i<='z';i++)
            if(str[j]==i)
            {
                s+=(i-96);
            }
            for(i='A';i<='Z';i++)
                if(str[j]==i)
            {
                s+=(i-64);
            }
        }
        return s;
}
int con(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    if(s<10)return s;
    else con(s);
}
int main()
{

    int a,b,s,ln,c[100],i,j;
    float r;
    char str[26],ch[26];
    for(i=0;i<=26;i++)
        c[i]=i+1;
    while(gets(str))
    {
        gets(ch);
       a=sum(str);
       b=sum(ch);
       a=con(a);
       b=con(b);
       if(a>b)
       {
           a^=b;
           b^=a;
           a^=b;
       }
       r=(float)a/(float)b*100;
       printf("%.2f %%\n",r);
    }
    return 0;
}
