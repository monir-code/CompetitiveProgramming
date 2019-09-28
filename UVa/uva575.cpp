#include<stdio.h>
#include<string.h>
int main()
{
    long long n,a,ln,c,i,s;
    char str[40];
    while(1){
    scanf("%s",str);
        if(str[0]=='0')return 0;
        c=2;
        s=0;
        ln=strlen(str);
        for(i=ln-1;i>=0;i--)
        {
            if(str[i]=='1')
                s+=c-1;
            else if(str[i]=='2')
                s+=2*(c-1);
            c*=2;
        }
        printf("%lld\n",s);
     }
     return 0;
}
