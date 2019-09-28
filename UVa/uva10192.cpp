#include<stdio.h>
#include<string.h>

int main()
{
    char str[501],ch[501];
    int c[501][501],m,n,i,j,a=1;
    while(gets(str))
    {

        if(str[0]=='#')return 0;
        gets(ch);
        m=strlen(str);
        n=strlen(ch);
        for(i=0;i<m;i++)
            c[i][0]=0;
        for(i=0;i<m;i++)
            c[0][i]=0;
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++)
        {
            if(str[i-1]==ch[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
            }
            else if(c[i][j-1]>=c[i-1][j])
                c[i][j]=c[i][j-1];
            else c[i][j]=c[i-1][j];
        }
        }
        printf("Case #%d: you can visit at most %d cities.\n",a,c[m][n]);
        a++;
    }
}
