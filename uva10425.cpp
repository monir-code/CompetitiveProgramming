#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,e,f;
    char abc[100];
    int ara[13],i,j,k,ch[15],ch1[15],c,g=1,l;
    while(scanf("%s",abc)!=EOF)
    {
        c=0;
        l=0;
           for(i=0;i<11;i++)
            scanf("%d",&ara[i]);
           ch[0]=ara[0]-ara[8];

           ch[1]=ara[1]-ara[9];
           ch[2]=ara[2]-ara[10];


           ch[3]=ara[4]-ara[8];
           ch[4]=ara[5]-ara[9];

           ch[5]=ara[6]-ara[10];
           a=(double)sqrt(ch[0]*ch[0]+ch[1]*ch[1]+ch[2]*ch[2]);
           b=(double)sqrt(ch[3]*ch[3]+ch[4]*ch[4]+ch[5]*ch[5]);
           e=ara[3];
           f=ara[7];
           printf("%s\n",abc);
           if(a>e)
            printf("n\n");
           else {printf("y\n");
           c++;
           }
           if(b>f)
            printf("n\n");
           else {printf("y\n");
           c++;
           }
           if(a==e&&b!=f||a!=e&&b==f)l=1;
           if(c==1)printf("y\n");
           if(c==2||c==0)
           {
               if(l=1)printf("n\n");
           }


    }
}
