#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,ln;
    char str[31];
    while(gets(str))
    {
        ln=strlen(str);
        for(i=0;i<ln;i++)
        {

            for(j='A';j<='C';j++)
            if(str[i]==j)str[i]='2';
             for(j='D';j<='F';j++)
            if(str[i]==j)str[i]='3';
            for(j='G';j<='I';j++)
            if(str[i]==j)str[i]='4';
             for(j='J';j<='L';j++)
            if(str[i]==j)str[i]='5';
             for(j='M';j<='O';j++)
            if(str[i]==j)str[i]='6';
             for(j='P';j<='S';j++)
            if(str[i]==j)str[i]='7';
             for(j='T';j<='V';j++)
            if(str[i]==j)str[i]='8';
            for(j='W';j<='Z';j++)
            if(str[i]==j)str[i]='9';
        }
         printf("%s\n",str);
    }
    return 0;
}
