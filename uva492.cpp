
#include <bits/stdc++.h>
using namespace std;
#include<string.h>
#include<ctype.h>
    char str[1000010];

int main()
{
    unsigned long long ln,a,b,c,i,k,j;
    while(gets(str))
    {
        ln=strlen(str);
        for(i=0;i<ln;)
        {
            if(isalpha(str[i])==0){cout << str[i];
                                 i++;
                     }
            else{            k=i;

                while(isalpha(str[k]))
                {
                    k++;
                }
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='O'||str[i]=='o'||str[i]=='i'||str[i]=='I'||str[i]=='U'||str[i]=='u')
          {
          for(j=i;j<k;j++)
                printf("%c",str[j]);
              printf("ay");
          }
        else{

         for(j=i+1;j<k;j++)
                printf("%c",str[j]);
                printf("%c",str[i]);
              printf("ay");

         }
          i=k;
            }

        }
        cout << endl;
    }
}








