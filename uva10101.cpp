 #include <bits/stdc++.h>
 using namespace std;

 int main()
 {
     unsigned long long n,a,b,c,d,e,f,g,h,i,j=1,k,l;
     while(scanf("%llu",&n)!=EOF)
     {
         a=n%100;
         b=(n%1000)/100;
         c=(n%100000)/1000;
         d=(n%10000000)/100000;
         e=(n%1000000000)/10000000;
         f=(n%10000000000)/1000000000;
         g=(n%1000000000000)/10000000000;
         h=(n%100000000000000)/1000000000000;
         i=(n%1000000000000000)/100000000000000;
         printf("%4llu.",j);
         if(i>0)printf(" %llu kuti",i);
         if(h>0)printf(" %llu lakh",h);
         if(g>0)printf(" %llu hajar",g);
         if(f>0)printf(" %llu shata",f);
         if(e>0)printf(" %llu",e);
        if(i>0||h>0||g>0||f>0||e>0) printf(" kuti");
         if(d>0)printf(" %llu lakh",d);
         if(c>0)printf(" %llu hajar",c);
         if(b>0)printf(" %llu shata",b);
         if(a>0)printf(" %llu",a);
         if(n==0)printf(" 0");
         printf("\n");
         j++;
     }
 }
