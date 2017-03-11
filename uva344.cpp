#include <bits/stdc++.h>
using namespace std;

int ii[110],vv[110],xx[110],ll[110],cc[110];

void add()
{
    int i,j,k,l,a,b,c;

    for(i=1;i<=100;i++)
    {
        if(i>1){
            ii[i]=ii[i-1];vv[i]=vv[i-1];xx[i]=xx[i-1];ll[i]=ll[i-1];cc[i]=cc[i-1];
        }
        if(i%10==1)ii[i]++;
        else if(i%10==2)ii[i]+=2;
        else if(i%10==3)ii[i]+=3;

        else if((i%10==4)||(i%10==6)){ii[i]++;vv[i]++;}
        else if(i%10==5)vv[i]++;
        else if(i%10==7){ii[i]+=2;vv[i]++;}

        else if(i%10==8){ii[i]+=3;vv[i]++;}
        else if(i%10==9){ii[i]++;xx[i]++;}

        a=i/10;

        if(a!=0)
        {
            if(a%10==0)cc[i]++;
            else if(a%10==1){xx[i]++;}
            else if(a%10==2){xx[i]+=2;}
            else if(a%10==3){xx[i]+=3;}
            else if(a%10==4){xx[i]++;ll[i]++;}
            else if(a%10==5){ll[i]++;}
            else if(a%10==6){ll[i]++;xx[i]++;}
            else if(a%10==7){xx[i]+=2;ll[i]++;}
            else if(a%10==8){xx[i]+=3;ll[i]++;}
            else if(a%10==9){xx[i]++;cc[i]++;}
        }
    }
}

int main()
{
    int i;
   ii[1]=0;vv[1]=0;xx[1]=0;ll[1]=0;cc[1]=0;
   add();
   while(cin >> i)
   {
       if(i==0)return 0;
       printf("%d: %d i, %d v, %d x, %d l, %d c\n",i,ii[i],vv[i],xx[i],ll[i],cc[i]);
   }
}
