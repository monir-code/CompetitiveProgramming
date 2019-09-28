#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c,k,ln;
    char str[10001];
    while(gets(str))
    {
        ln=strlen(str);
        c=0;
        if(str[0]>='a'&&str[0]<='z'||str[0]>='A'&&str[0]<='Z')
                c++;
        for(i=1;i<ln;i++)
        {
            if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
                c++;
            if(str[i-1]>='a'&&str[i-1]<='z'||str[i-1]>='A'&&str[i-1]<='Z')
                c--;
                }

        }
          printf("%d\n",c);
    }
    return 0;
}
