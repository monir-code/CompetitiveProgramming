#include<bits/stdc++.h>
using namespace std;

int main()
{
  char str[250];
  int i,j,k,b,s,a,c,ch[250];
  while(gets(str))
  {
      int ln=strlen(str);
      if(str[0]<48||str[0]>57)
      {
          int d;
          for(i=ln-1;i>=0;i--){
          d=str[i];
          b=0;
           while(d>0)
           {
               ch[b]=d%10;
               d/=10;
               b++;
           }
           for(j=0;j<b;j++)
                 cout << ch[j];
          }

      }

      else {
             s=0;
            b=0;
            c=1;
        for(j=ln-1;j>=0;j--){
                    s=s*c+(str[j]-48);
                   c=10;
                    if(s>=32){
                        ch[0]=s;
                        s=0;
                        b++;
                        c=1;
                      printf("%c",ch[0]);
                    }

        }

        }
        cout << endl;
      }
  }



