#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,ck,d,ar[100],br[100],cr[100],i,r,j,k,l,m,n,nu,dk,dr[100],er[100],fr[100],aa,ab,ii,ca,kk;

    while(cin >> n >> k >> m)
    {
        if(n==0&&k==0&&m==0)return 0;
        kk=0;
        for(i=0;i<n;i++)
            ar[i]=i+1;
        j=n;
        for(i=0;i<n;i++)
        {
            cr[i]=j;
            j--;
        }

        nu=n;
        i=0;
        j=0;
        l=0;
        ck=0;
        dk=0;
        r=0;
        aa=0;
        ii=0;
        while(1)
        {
            ck=0;
            if(nu==0)break;
            while(ck!=k){
            for(l=0;l<j;)
            {

               if(br[l]==ar[i]){
                         i++;
                         l=-1;
                        if(i==n)i=0;
                         }
                l++;
            }
            ck++;
            if(ck==k)
            {
                br[j]=ar[i];
                j++;
                if(kk!=0)printf(",");
                printf("%3d",ar[i]);
                ca=ar[i];
                nu--;
                if(nu==0)break;
            }
            i++;
            if(i==n)i=0;
            }
           if(nu==0)break;
      dk=0;
      while(dk!=m){
            for(l=0;l<j-1;)
            {
               if(br[l]==cr[ii]){
                         ii++;
                         l=-1;
                        if(ii==n)ii=0;
                         //continue;
                         }
                l++;
            }
            dk++;
            if(dk==m)
            {
                if(ca==cr[ii])continue;
                br[j]=cr[ii];
                j++;
                printf("%3d",cr[ii]);
                //cout <<cr[ii] <<" ";
                //er[r]=cr[i];r++;
                nu--;
                if(nu==0)
                    break;
            }
            ii++;
            if(ii==n)ii=0;
        }
        if(nu==0)
        {
            break;
        }
        kk++;
        }
      cout << endl;
    }
}
