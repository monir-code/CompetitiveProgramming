#include<stdio.h>
#include<string.h>
int main()
{
    char str[201],ch;
    long long ln,m,i,j,t,ara[54];
    while(gets(str)){
        for(i=0;i<=51;i++)
        ara[i]=0;
            m=0;
            for(j=0;j<27;j++)
            ara[j]=0;
            ln=strlen(str);
            for(j=0;j<ln;j++)
            {
                    if(str[j]=='a')
                    ara[0]++;
                    else if(str[j]=='b')
                    ara[1]++;
                    else if(str[j]=='c')
                    ara[2]++;
                    else if(str[j]=='d')
                    ara[3]++;
                    else if(str[j]=='e')
                    ara[4]++;
                    else if(str[j]=='f')
                    ara[5]++;
                    else if(str[j]=='g')
                    ara[6]++;
                    else if(str[j]=='h')
                    ara[7]++;
                    else if(str[j]=='i')
                    ara[8]++;
                    else if(str[j]=='j')
                    ara[9]++;
                    else if(str[j]=='k')
                    ara[10]++;
                    else if(str[j]=='l')
                    ara[11]++;
                    else if(str[j]=='m')
                    ara[12]++;
                    else if(str[j]=='n')
                    ara[13]++;
                    else if(str[j]=='o')
                    ara[14]++;
                    else if(str[j]=='p')
                    ara[15]++;
                    else if(str[j]=='q')
                    ara[16]++;
                    else if(str[j]=='r')
                    ara[17]++;
                    else if(str[j]=='s')
                    ara[18]++;
                    else if(str[j]=='t')
                    ara[19]++;
                    else if(str[j]=='u')
                    ara[20]++;
                    else if(str[j]=='v')
                    ara[21]++;
                    else if(str[j]=='w')
                    ara[22]++;
                    else if(str[j]=='x')
                    ara[23]++;
                    else if(str[j]=='y')
                    ara[24]++;
                    else if(str[j]=='z')
                    ara[25]++;
                    if(str[j]=='A')
                    ara[26]++;
                    else if(str[j]=='B')
                    ara[27]++;
                    else if(str[j]=='C')
                    ara[28]++;
                    else if(str[j]=='D')
                    ara[29]++;
                    else if(str[j]=='E')
                    ara[30]++;
                    else if(str[j]=='F')
                    ara[31]++;
                    else if(str[j]=='G')
                    ara[32]++;
                    else if(str[j]=='H')
                    ara[33]++;
                    else if(str[j]=='I')
                    ara[34]++;
                    else if(str[j]=='J')
                    ara[35]++;
                    else if(str[j]=='K')
                    ara[36]++;
                    else if(str[j]=='L')
                    ara[37]++;
                    else if(str[j]=='M')
                    ara[38]++;
                    else if(str[j]=='N')
                    ara[39]++;
                    else if(str[j]=='O')
                    ara[40]++;
                    else if(str[j]=='P')
                    ara[41]++;
                    else if(str[j]=='Q')
                    ara[42]++;
                    else if(str[j]=='R')
                    ara[43]++;
                    else if(str[j]=='S')
                    ara[44]++;
                    else if(str[j]=='T')
                    ara[45]++;
                    else if(str[j]=='U')
                    ara[46]++;
                    else if(str[j]=='V')
                    ara[47]++;
                    else if(str[j]=='W')
                    ara[48]++;
                    else if(str[j]=='X')
                    ara[49]++;
                    else if(str[j]=='Y')
                    ara[50]++;
                    else if(str[j]=='Z')
                    ara[51]++;
            }
            for(j=0;j<52;j++)
            {
                if(m<ara[j])m=ara[j];
            }
             for(j=26;j<52;j++)
            {
                if(m==ara[j])printf("%c",39+j);
            }
            for(j=0;j<26;j++)
            {
                if(m==ara[j])printf("%c",97+j);
            }

            printf(" %d\n",m);



    }
    return 0;
}



