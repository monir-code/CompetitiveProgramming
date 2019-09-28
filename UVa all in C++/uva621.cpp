#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,t,b,j,ln;
    char str[2000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        cin >> str;
        ln=strlen(str);
        a=0;
        for(j=0;j<ln;j++)
        {
            a=a*10+str[j]-48;
        }
        if(a==1||a==4||a==78)
           printf("+\n");
       else if(str[ln-1]=='5'&&str[ln-2]=='3')
       {
           for(j=0;j<ln-2;j++)
           {
               if(str[j]=='1'||str[j]=='4'||str[j]=='7'&&str[j+1]=='8') {
                    printf("-\n");
               break;
               }
           }

       }
        else if(str[0]=='9'&&str[ln-1]=='4')
        {
             for(j=1;j<=ln-2;j++)
           {
               if(str[j]=='1'||str[j]=='4'||str[j]=='7'&&str[j+1]=='8') {printf("*\n");
               break;}

           }
        }

         else if(str[0]=='1'&&str[1]=='9'&&str[2]=='0'){
            for(j=3;j<ln;j++)
           {
               if(str[j]=='1'||str[j]=='4'||str[j]=='7'&&str[j+1]=='8'){ printf("?\n");
               break;}

           }
         }

    }

}
