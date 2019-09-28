#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,n,x,y,s;
    int i;
   char st[3000];
   while(gets(st))
   {
          if(strcmp(st,"END")==0)return 0;
          x=0;y=0;
          int ln=strlen(st);
          for(i=0;i<ln;)
          {
              s=0;
              while(1){
            //if((st[i]>='0'&&st[i]<='9'))break;
             st[i];
                  s=s*10+st[i]-48;
                  i++;

              }
              if(st[i]=='N')
              {
                  if(st[i+1]==','||st[i+1]=='.'){
                        y+=s;i+=2;
                  }
                  else if(st[i+1]=='W') {
                    s*=s;
                    s/=2;
                    s=sqrt(s);
                    y+=s;
                    x-=s;
                    i+=3;
                  }
                  else if(st[i+1]=='E') {
                    s*=s;
                    s/=2;
                    s=sqrt(s);
                    y+=s;
                    x+=s;
                    i+=3;
                  }
              }
              else if(st[i]=='E')
              {
                  if(st[i+1]==','||st[i+1]=='.'){
                        x+=s;i+=2;
                  }
              }
              else if(st[i]=='S')
              {
                  if(st[i+1]==','||st[i+1]=='.'){
                        y-=s;i+=2;
                  }
                  else if(st[i+1]=='W') {
                    s*=s;
                    s/=2;
                    s=sqrt(s);
                    y-=s;
                    x-=s;
                    i+=3;
                  }
                  else if(st[i+1]=='E') {
                    s*=s;
                    s/=2;
                    s=sqrt(s);
                    y-=s;
                    x+=s;
                    i+=3;
                  }
              }


              else if(st[i]=='W')
              {
                  if(st[i+1]==','||st[i+1]=='.'){
                        x+=s;i+=2;
                  }
              }



          }

          printf("%.3lf %.3lf\n",x,y);
          a=x*x+y*y;
          a=sqrt(a);
          printf("%.3lf\n",a);

   }
}
