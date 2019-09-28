#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,ln[16],c,t,i,j;
    char str[27],ch[16][27];
    while(scanf("%d",&t)){
        if(t==0)return 0;
        for(i=0;i<t;i++)
            scanf("%s",ch[i]);
        for(i=0;i<t;i++)
            ln[i]=strlen(ch[i]);
            for(i=0;i<t-1;i++)
                for(j=i+1;j<t;j++)
            {
                if(ln[i]>ln[j])
                {
                    ln[i]^=ln[j];
                    ln[j]^=ln[i];
                    ln[i]^=ln[j];
                    strcpy(str,ch[i]);
                    strcpy(ch[i],ch[j]);
                    strcpy(ch[j],str);
                }
            }
            for(i=0;i<t;i++)
            {
                if(i%2==0)printf("%s\n",ch[i]);
            }
            for(i=t-1;i>0;i--)
            {
                if(i%2==1)printf("%s\n",ch[i]);
            }

    }
    return 0;
}
