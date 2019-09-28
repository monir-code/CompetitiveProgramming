#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],ch[101];
    int i,j,n,g,ln,a,b;
    while(scanf("%d",&g))
    {
        if(g==0)return 0;
        scanf("%s",str);
        ln=strlen(str);

        n=ln/g;
        a=n;
        while(a<=ln){
                b=a-n;
        for(i=a-1;i>=b;i--)
        printf("%c",str[i]);
        a+=n;

    }
    printf("\n");
    }
    return 0;
}

