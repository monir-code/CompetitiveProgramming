#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[110],str1[110],str2[110],str3[110],str4[110],str5[110],str6[110],str7[110],str8[110],str9[110];
    int ara[110],m,n,i,j,k,a,b,t;
    cin >> t;
    for(j=1;j<=t;j++)
    {
        scanf("%s%d",str,&ara[0]);
        scanf("%s%d",str1,&ara[1]);
        scanf("%s%d",str2,&ara[2]);
        scanf("%s%d",str3,&ara[3]);
        scanf("%s%d",str4,&ara[4]);
        scanf("%s%d",str5,&ara[5]);
        scanf("%s%d",str6,&ara[6]);
        scanf("%s%d",str7,&ara[7]);
        scanf("%s%d",str8,&ara[8]);
        scanf("%s%d",str9,&ara[9]);
        m=ara[0];
        for(i=1;i<=9;i++)
        {
            if(m<ara[i])m=ara[i];
        }
        printf("Case #%d:\n",j);
            if(m==ara[0])printf("%s\n",str);
            if(m==ara[1])printf("%s\n",str1);
            if(m==ara[2])printf("%s\n",str2);
            if(m==ara[3])printf("%s\n",str3);
            if(m==ara[4])printf("%s\n",str4);
            if(m==ara[5])printf("%s\n",str5);
            if(m==ara[6])printf("%s\n",str6);
            if(m==ara[7])printf("%s\n",str7);
            if(m==ara[8])printf("%s\n",str8);
            if(m==ara[9])printf("%s\n",str9);

    }
}
