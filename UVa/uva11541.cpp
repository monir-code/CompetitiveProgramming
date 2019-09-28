#include<stdio.h>
#include<string.h>
int main()
{
    char str[501];
    int i,j,ln,t,n,a,K=1;
    scanf("%d\n",&t);
    while(t--)
    {
        gets(str);
        ln=strlen(str);
        printf("Case %d: ",K);
        for(i=0;i<ln;i++)
        {
            n=0;
            if(str[i]>='0'&&str[i]<='9')
            {
                a=i-1;
                n=str[i]-'0';
                if(str[i+1]>='0'&&str[i+1]<='9')
                {
                    n=n*10+str[i+1]-'0';
                    i++;
                     if(str[i+1]>='0'&&str[i+1]<='9')
                {
                    n=n*10+str[i+1]-'0';
                    i++;
                }
                }

            }
            for(j=0;j<n;j++)
            {
                printf("%c",str[a]);
            }
        }
        printf("\n");
        K++;
    }
    return 0;
    }

