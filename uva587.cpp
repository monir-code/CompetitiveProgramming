#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,n,x,y,s;
    int i,k=0;
   char st[3000];
   while(gets(st))
   {
       k++;
          if(strcmp(st,"END")==0)return 0;
          x=0;y=0;
          int ln=strlen(st);
          for(i=0;i<ln;)
          {
              s=0;
              while(st[i]>='0'&&st[i]<='9'){
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
                        x-=s;i+=2;
                  }
              }


          }
     printf("Map #%d\n",k);
  cout << "The treasure is located at ";

          printf("(%.3lf,%.3lf).\n",x,y);
        cout << "The distance to the treasure is ";
          a=x*x+y*y;
          a=sqrt(a);
          printf("%.3lf.\n",a);
          cout << endl;

   }
}
