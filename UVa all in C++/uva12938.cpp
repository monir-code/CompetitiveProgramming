/*#include <bits/stdc++.h>
using namespace std;
int main()
{
         int i,j,k=0,l,n,x[100][10],y[10],z,p,count,c,m,t;
         for(i=32;i<=99;i++){
         z=i*i;
           p=0;
        while(z>0){
          x[k][p++]=z%10;
         z=z/10;
         }
          k++;
         t=k;
        }
       scanf("%d",&n);
        for(i=1;i<=n;i++){
       k=0,count=0;
     scanf("%d",&l);
        while(l>0){
      y[k++]=l%10;
        l=l/10;
        }
       for(j=0;j<t;j++){
      m=0;
      for(c=0;c<4;c++){
     if(x[j][c]==y[c]){
       m++;
      }
     }
    if(m==3){
    count++;
      }
   }
       printf("Case %d: %d\n",i,count);
   }
     return 0;
 }
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k=0,i,j=0,a,b,v,z,c,d,ar[100][10],br[10],n,l,t,m;
    for(i=32;i<=99;i++)
    {
        j=0;
        z=i*i;
        while(z>0)
        {
            ar[k][j]=z%10;
            z/=10;
            j++;
        }
        k++;
        n=k;
    }
    cin >> t;
    for(l=1;l<=t;l++)
    {
        cin >> a;
        i=0;
        while(a>0)
        {
            br[i]=a%10;
            i++;
            a/=10;
        }
        c=0;
        for(i=0;i<n;i++)
        {
            m=0;
            for(j=0;j<4;j++)
            {
                if(ar[i][j]==br[j])
                    m++;
            }
            if(m==3)c++;
        }
        printf("Case %d: %d\n",l,c);
    }

}
























