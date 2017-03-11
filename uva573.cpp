#include <bits/stdc++.h>
using namespace std;

int main()
{
    double h,u,d,f,a,b,c,i,j,k,p,s;
    while(scanf("%lf",&h))
    {
        cin >> u>>d>>f;
        if(h==0)return 0;
        s=0;
        p=(f*u)/100;
        a=u;
        c=0;
        while(1)
        {
            c++;
            s+=a;
            if(s>h||s<0)
            {
                if(s>h)
                cout << "success on day " ;
                else  printf("failure on day ");
                break;
            }
            s-=d;
            if(s>h||s<0)
            {
                if(s>=h)cout << "success on day " ;
                else printf("failure on day ");
                break;
            }
            if(a>0)
            a-=p;
        }
        cout << c << endl;
    }
}
