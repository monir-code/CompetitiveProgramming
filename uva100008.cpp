#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int c[100],i,j,k,l,t,m=0;
    char ch[500];
    for(i=65;i<92;i++)
        c[i]=0;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(ch);
        for(j='A';j<='Z';j++)
        {
            for(k=0;ch[k]!='\0';k++)
            {
                if(toupper(ch[k])==j)
                    c[j]++;
            }
            if(m<c[j])m=c[j];
        }
    }
    for(i=m;i>0;i--){
        for(j='A';j<='Z';j++)
    {
        if(c[j]==i)printf("%c %d\n",j,i);
    }
}
    return 0;
}
