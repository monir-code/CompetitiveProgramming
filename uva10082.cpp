#include<stdio.h>
#include<string.h>
int main()
{
    long long a,b,ln,j,i;
    char str[1000];
    while(gets(str))
    {
        ln=strlen(str);
        for(i=0;i<ln;i++)
        {
            if(str[i]=='1')str[i]='`';
            for(j='2';j<='9';j++)
                if(str[i]==j)
            {
                str[i]--;
            }

             if(str[i]=='0')str[i]='9';
             else if(str[i]=='-')str[i]='0';
             else if(str[i]=='=')str[i]='-';
             else if(str[i]=='P'||str[i]=='K'||str[i]=='L'||str[i]=='G'||str[i]=='H')
                str[i]--;
             else if(str[i]=='W')
                str[i]='Q';
             else if(str[i]=='E')
                str[i]='W';
                else if(str[i]=='R')
                str[i]='E';
                else if(str[i]=='T')
                str[i]='R';
                else if(str[i]=='Y')
                str[i]='T';
                else if(str[i]=='U')
                str[i]='Y';
                else if(str[i]=='I')
                str[i]='U';
                else if(str[i]=='O')
                str[i]='I';
                else if(str[i]=='[')
                str[i]='P';
                else if(str[i]==']')
                str[i]='[';
                else if(str[i]=='\\')
                str[i]=']';
                else if(str[i]=='S')
                str[i]='A';
                else if(str[i]=='D')
                str[i]='S';
                else if(str[i]=='F')
                str[i]='D';
                else if(str[i]=='J')
                str[i]='H';
                else if(str[i]==';')
                str[i]='L';
                else if(str[i]==39)
                str[i]=';';
                else if(str[i]=='X')
                str[i]='Z';
                else if(str[i]=='C')
                str[i]='X';
                else if(str[i]=='V')
                str[i]='C';
                else if(str[i]=='B')
                str[i]='V';

                else if(str[i]=='M')
                str[i]='N';
                else if(str[i]=='N')
                str[i]='B';
                else if(str[i]==',')
                str[i]='M';
                else if(str[i]=='.')
                str[i]=',';
                 else if(str[i]=='/')
                str[i]='.';
        }
        printf("%s\n",str);
    }
}
