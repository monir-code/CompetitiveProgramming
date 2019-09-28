#include<stdio.h>
#include<string.h>
int main()
{
    char str[201],ch;
    long long ln,m,i,j,t,ara[27];
   while(scanf("%lld",&t)!=EOF){
    ch=getchar();
   for(i=0;i<t;i++){
           gets(str);
            m=0;
            for(j=0;j<27;j++)
            ara[j]=0;

            ln=strlen(str);
            for(j=0;j<ln;j++)
            {
                    if(str[j]=='a'||str[j]=='A')
                    ara[0]++;
                    else if(str[j]=='b'||str[j]=='B')
                    ara[1]++;
                    else if(str[j]=='c'||str[j]=='C')
                    ara[2]++;
                    else if(str[j]=='d'||str[j]=='D')
                    ara[3]++;
                    else if(str[j]=='e'||str[j]=='E')
                    ara[4]++;
                    else if(str[j]=='f'||str[j]=='F')
                    ara[5]++;
                    else if(str[j]=='g'||str[j]=='G')
                    ara[6]++;
                    else if(str[j]=='h'||str[j]=='H')
                    ara[7]++;
                    else if(str[j]=='i'||str[j]=='I')
                    ara[8]++;
                    else if(str[j]=='j'||str[j]=='J')
                    ara[9]++;
                    else if(str[j]=='k'||str[j]=='K')
                    ara[10]++;
                    else if(str[j]=='l'||str[j]=='L')
                    ara[11]++;
                    else if(str[j]=='m'||str[j]=='M')
                    ara[12]++;
                    else if(str[j]=='n'||str[j]=='N')
                    ara[13]++;
                    else if(str[j]=='o'||str[j]=='O')
                    ara[14]++;
                    else if(str[j]=='p'||str[j]=='P')
                    ara[15]++;
                    else if(str[j]=='q'||str[j]=='Q')
                    ara[16]++;
                    else if(str[j]=='r'||str[j]=='R')
                    ara[17]++;
                    else if(str[j]=='s'||str[j]=='S')
                    ara[18]++;
                    else if(str[j]=='t'||str[j]=='T')
                    ara[19]++;
                    else if(str[j]=='u'||str[j]=='U')
                    ara[20]++;
                    else if(str[j]=='v'||str[j]=='V')
                    ara[21]++;
                    else if(str[j]=='w'||str[j]=='W')
                    ara[22]++;
                    else if(str[j]=='x'||str[j]=='X')
                    ara[23]++;
                    else if(str[j]=='y'||str[j]=='Y')
                    ara[24]++;
                    else if(str[j]=='z'||str[j]=='Z')
                    ara[25]++;
            }
            for(j=0;j<26;j++)
            {
                if(m<ara[j])m=ara[j];
            }
            for(j=0;j<26;j++)
            {
                if(m==ara[j])printf("%c",97+j);
            }
            printf("\n");

   }
   }
    return 0;
}


