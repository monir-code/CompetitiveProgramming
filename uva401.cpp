#include <bits/stdc++.h>
using namespace std;
#include<string>
int main()
{
    char str[100000],ch[100000];
    int a,b,i,j,ln,c=0;
    while(gets(ch))
    {
        //if(ch[0]==10)continue;
        //printf("%s\n",ch);
        ln=strlen(ch);
        j=0;
        for(i=0;i<ln;i++)
        {
            if(isalpha(ch[i])||ch[i]>='0'&&ch[i]<='9')
            {
               str[j]=ch[i];j++;
            }

        }
        if(isalpha(str[0])||str[0]>='0'&&str[0]<='9'){
        c++;

        a=1;
        b=0;
        ln=j;
        for(i=0;i<ln/2;i++){
            if(str[i]!=str[ln-1-i])
        {
           a=0;
        }
        }

        for(i=0;i<ln;i++)
        {

           if(str[i]=='E'||str[i]=='e')ch[i]='3';
           else if(str[i]=='J'||str[i]=='j')ch[i]='L';
           else if(str[i]=='L'||str[i]=='l')ch[i]='J';
           else if(str[i]=='S'||str[i]=='s')ch[i]='2';
           else if(str[i]=='Z'||str[i]=='z')ch[i]='5';
           else if(str[i]=='2'||str[i]=='2')ch[i]='S';
           else if(str[i]=='3'||str[i]=='3')ch[i]='E';
           else if(str[i]=='5'||str[i]=='5')ch[i]='Z';


           else if(str[i]=='A'||str[i]=='a')ch[i]='A';
           else if(str[i]=='H'||str[i]=='h')ch[i]='H';
           else if(str[i]=='I'||str[i]=='i')ch[i]='I';
           else if(str[i]=='M'||str[i]=='m')ch[i]='M';
           else if(str[i]=='O'||str[i]=='o')ch[i]='O';
           else if(str[i]=='T'||str[i]=='t')ch[i]='T';
           else if(str[i]=='U'||str[i]=='u')ch[i]='U';

           else if(str[i]=='V'||str[i]=='v')ch[i]='V';
           else if(str[i]=='W'||str[i]=='w')ch[i]='W';
           else if(str[i]=='Y'||str[i]=='y')ch[i]='Y';
           else if(str[i]=='8'||str[i]=='8')ch[i]='8';

           else if(str[i]=='B'||str[i]=='b')ch[i]='B';
           else if(str[i]=='C'||str[i]=='c')ch[i]='C';
           else if(str[i]=='D'||str[i]=='d')ch[i]='D';
           else if(str[i]=='F'||str[i]=='f')ch[i]='F';
           else if(str[i]=='G'||str[i]=='g')ch[i]='G';
           else if(str[i]=='K'||str[i]=='k')ch[i]='K';
           else if(str[i]=='N'||str[i]=='n')ch[i]='N';


           else if(str[i]=='P'||str[i]=='p')ch[i]='P';
           else if(str[i]=='Q'||str[i]=='q')ch[i]='Q';
           else if(str[i]=='R'||str[i]=='r')ch[i]='R';
           else if(str[i]=='4'||str[i]=='4')ch[i]='4';
           else if(str[i]=='6'||str[i]=='6')ch[i]='6';
           else if(str[i]=='7'||str[i]=='7')ch[i]='7';
           else if(str[i]=='9'||str[i]=='9')ch[i]='9';
           else if(str[i]=='0'||str[i]=='0')ch[i]='0';

           else ch[i]=str[i];

        }
        reverse (ch,ch+ln);
        c=1;
        for(i=0;i<ln;i++)
        {
            if(str[i]!=ch[i])c=0;
        }
        ln=j;
       if(ln==0)continue;
        for(i=0;i<ln;i++)
        {
            printf("%c",str[i]);
        }
        if(c==1)b=1;
        for(i=0;i<ln;i++)
        {
            if(str[i]=='B'||str[i]=='b'||str[i]=='C'||str[i]=='c'||str[i]=='D'||str[i]=='d'||str[i]=='F'||str[i]=='f'||str[i]=='G'||str[i]=='g'||str[i]=='K'||str[i]=='N'||str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='4'||str[i]=='6'||str[i]=='7'||str[i]=='9')
             b=0;
        }
        if(a==0&&b==0)cout << " -- is not a palindrome."<< endl;

        else if(a==1&&b==0)cout << " -- is a regular palindrome."<< endl;
        else if(a==0&&b==1)cout << " -- is a mirrored string."<< endl;
        else if(a==1&&b==1)cout << " -- is a mirrored palindrome."<< endl;

        cout << endl;

    }
    }
}
