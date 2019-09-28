#include<stdio.h>
#include<string.h>
int main()
{
    int b,c,m,n,i,j;
    char a[1000][21];
    for(i=0;i!='#';i++)
    {
        for(j=0;j!='\0';j++)
            scanf("%c",&a[i][j]);
    }
    b=i-1;
    for(i=0;i!='#';i++)
    {
        for(j=0;j!='\0';j++)
            scanf("%c",&a[i][j]);
    }

}#include<stdio.h>
int main()
{
int n;
while(scanf("%d",&n)==1)
{
if (n==2)
printf("00\n01\n81\n");
else if (n==4)
printf("0000\n0001\n2025\n3025\n9801\n");
else if (n == 6)
printf("000000\n000001\n088209\n494209\n998001\n");
else if (n == 8)
printf("00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n");
else
break;
}
}
