#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,ln;
    char str[5000];
    while((scanf("%s",str))!=EOF)
    {
        ln=strlen(str);
        for(i=0;i<ln;i++)
            str[i]=str[i]-7;
        printf("%s\n",str);
    }
    return 0;
}
