#include<stdio.h>
int main()
{
    int n,b;
    while(scanf("%d",&n)!=EOF)
    {
        b=n%6;
        if(b==1||b==2||b==3||b==4||b==5)
            printf("N\n");
        else if(b==0)printf("Y\n");
    }

}
