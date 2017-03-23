#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,l,tag,k;
    char letter[210],str[110];
    scanf("%d\n",&T);
    while(T--)
    {
        gets(letter);
        l=strlen(letter);
        for(i=0;i<l/2;i++)
        {
            if(i%2==0)
                printf("%c",letter[i]);
        }
        printf("\n");
    }
}
