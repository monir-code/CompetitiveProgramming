/*#include <stdio.h>
#include <string.h>
int count[4];
int main()
{
    char haiku[1000]=" ",input[1000];
    int i,j,k,len,flag,add;

    while(gets(input)&&strcmp(input,"e/o/i")!=0){

    strcat(haiku,input);
    strcat(haiku,"/ ");
    len=strlen(haiku);
    //puts(haiku);
    j=0;
    flag=1;
    add=0;
    for(i=1;i<len-1;i++){
      if(haiku[i]=='/'){
        if(j==0&&count[j]!=5){
            flag=0;
            break;
        }
        else if(j==1&&count[j]!=7){
            flag=0;
            break;
        }
        else if(j==2&&count[j]!=5){
            flag=0;
            break;
        }
        j++;
      }
      if(((haiku[i]=='a'||haiku[i]=='e'||haiku[i]=='i'||haiku[i]=='o'||haiku[i]=='u'||haiku[i]=='y')&&!(haiku[i-1]=='a'||haiku[i-1]=='e'||haiku[i-1]=='i'||haiku[i-1]=='o'||haiku[i-1]=='u'||haiku[i-1]=='y'))){
         count[j]++;


      }

    }
    if(flag==0)printf("%d\n",j+1);
    else if(flag==1)printf("Y\n");
    for(k=0;k<3;k++)count[k]=0;
    strcpy(haiku," ");
    }


    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        char st[10000]=" ",sr[10000];

        int a,b,c,i,j,k,ar[30]={0};
        //scanf("%s",st);
        gets(sr);
        if(strcmp(sr,"e/o/i")==0)return 0;
        strcat(st,sr);
        strcat(st,"/");
        int ln=strlen(st);
        //puts(st);
        j=0;
        c=1;

        for(i=1;i<ln;i++)
        {
            if(st[i]=='/'&&j==0)
            {
                if(ar[j]!=5){
                    printf("1\n");c=0;
                }
                else j++;
            }
            else if(st[i]=='/'&&j==1)
            {
                if(ar[j]!=7){
                    printf("2\n");c=0;
                }
                else j++;
            }
            else if(st[i]=='/'&&j==2)
            {
                if(ar[j]!=5){
                    printf("3\n");c=0;
                }
                else printf("Y\n");
            }
            else if(((st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='y')&&!(st[i-1]=='a'||st[i-1]=='e'||st[i-1]=='i'||st[i-1]=='o'||st[i-1]=='u'||st[i-1]=='y'))){
                ar[j]++;
            }
            if(c==0)break;
        }
    }


}


