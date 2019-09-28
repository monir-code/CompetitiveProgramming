#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    long long a,b,i,j,k,ln;
    char str[100000];
    gets(str);
    ln=strlen(str);
    for(i=0;i<ln;i++)
    {
        if(str[i]=='E'||str[i]=='e')printf("q");
        else if(str[i]=='r'||str[i]=='R')printf("w");
        else if(str[i]=='t'||str[i]=='T')printf("e");
        else if(str[i]=='y'||str[i]=='Y')printf("r");
        else if(str[i]=='u'||str[i]=='U')printf("t");
        else if(str[i]=='i'||str[i]=='I')printf("y");

        else if(str[i]=='o'||str[i]=='O')printf("u");
        else if(str[i]=='p'||str[i]=='P')printf("i");
        else if(str[i]=='['||str[i]=='{')printf("o");
        else if(str[i]==']'||str[i]=='}')printf("p");
        else if(str[i]=='d'||str[i]=='D')printf("a");

        else if(str[i]=='f'||str[i]=='F')printf("s");
        else if(str[i]=='g'||str[i]=='G')printf("d");
        else if(str[i]=='h'||str[i]=='H')printf("f");
        else if(str[i]=='j'||str[i]=='J')printf("g");
        else if(str[i]=='k'||str[i]=='K')printf("h");

        else if(str[i]=='l'||str[i]=='L')printf("j");
        else if(str[i]==';'||str[i]==':')printf("k");
        else if(str[i]==39||str[i]=='"')printf("l");
        else if(str[i]==92||str[i]==33)printf(";");
        else if(str[i]=='c'||str[i]=='C')printf("z");

        else if(str[i]=='v'||str[i]=='V')printf("x");
        else if(str[i]=='b'||str[i]=='B')printf("c");
        else if(str[i]=='n'||str[i]=='N')printf("v");
        else if(str[i]=='m'||str[i]=='M')printf("b");
        else if(str[i]==','||str[i]=='<')printf("n");

        else if(str[i]=='.'||str[i]=='>')printf("m");
        else if(str[i]=='/'||str[i]=='?')printf(",");
        else if(str[i]==' '||str[i]==' ')printf(" ");


    }
    printf("\n");
}
