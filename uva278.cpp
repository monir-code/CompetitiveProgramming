#include<stdio.h>
int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}
int main()
{
  int t,m,n,i,ans;
  char ch,a;
  scanf("%d",&t);
  //t*=2;
      while(t--){
   // scanf("%c",&ch);
   ch=getchar();
      scanf("%d%d",&m,&n);
     if(ch=='r'){
          ans=min(m,n);
        printf("%d\n",ans);}
     else if(ch=='Q'){
        ans=min(m,n);
        printf("%d\n",ans);}
     else if(ch=='k'){
        ans=((m*n)+1)/2;
        printf("%d\n",ans);}
     else if(ch=='K'){
        ans=((m+1)/2)*((n+1)/2);
        printf("%d\n",ans);
        }
     }
  return 0;
}
