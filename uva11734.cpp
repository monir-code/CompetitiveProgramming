
#include<stdio.h>
#include <string.h>
int main()
{
    char str[50],ch[50],ch1[50];
    int t,a,b,c,i,j,ln,ln1,k;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(str);
        ln=strlen(str);
        gets(ch);
        ln1=strlen(ch);
        j=0;
        if(ln!=ln1)
        {for(k=0;k<ln;k++){
            if(str[k]!=' ')
            {
                ch1[j]=str[k];
                j++;
            }
            }

        }
      if(strcmp(str,ch)==0)printf("Case %d: Yes\n",i);
       else if(strcmp(ch1,ch)==0)printf("Case %d: Output Format Error\n",i);
     else printf("Case %d: Wrong Answer\n",i);
    }

}
