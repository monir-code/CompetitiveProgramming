#include <bits/stdc++.h>
using namespace std ;
int rev (int k)
{
    int r=0,i,j,c=1,s=0,s1=0,r1=0,d;
     i=k;
         vector < int > b,a;
    while(i>0)
    {
        a.push_back(i%10);
        i/=10;
    }
    sort (a.begin(),a.end());
   b=a;
   reverse (b.begin(),b.end());
   j=a.size();

   for(i=j-1;i>=0;i--)
   {
       r=a[i]*c;
       r1=b[i]*c;
       s+=r;
       s1+=r1;
       c*=10;
   }
   d=s1-s;
   cout << s1 << " - "<< s << " = " << d << endl;
  return d;
}
int main()
{
    int k,i=0,j,b,a,c;
    while(cin >> k)
    {
        if(k==0)return 0;
   c=0;
    b=k;
    cout << "Original number was " << k << endl;
    while(1)
    {
           i=rev(k);
           a=i;
           b=k;
           k=i;
           c++;
           if(a==b)
           {
               cout << "Chain lenth " << c << endl << endl;
               break;
           }


    }

    }

}
/*
#include <bits/stdc++.h>
using namespace std;
#include<math.h>
int main()
{
    char str[10]="1234";
    double d;
    d=strpos(str);
    cout << d;
}*/






















