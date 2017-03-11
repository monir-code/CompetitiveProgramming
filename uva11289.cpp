#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,ln,n,k;
    char str[10],ch[8]="three",ch1[5]="one",ch2[5]="two";
    scanf("%d",&n);
    getchar();
    for(k=0;k<n;k++)
    {
        gets(str);
        c=0;
        ln=strlen(str);
        if(ln==5)
        {
            for(i=0;i<5;i++)
                if(str[i]!=ch[i])
                c++;
                if(c<=1)printf("3\n");
        }
        else if(ln==3)
        {
            for(i=0;i<3;i++)
                if(str[i]!=ch1[i])
                c++;
                if(c<=1)printf("1\n");
                else {
                        c=0;
                    for(i=0;i<3;i++)
                if(str[i]!=ch2[i])
                c++;
                if(c<=1)printf("2\n");
                }
        }

    }
}
