#include<stdio.h>
#include<string.h>
long long bot[9];
long long cont(long long a,long long b,long long c)
{
    long long m=0,i;
    for(i=0;i<9;i++)
    {
        if(i!=a&&i!=b&&i!=c)
        m+=bot[i];
    }
    return m;

}
int main()
{
    long long i,j,combi[10],m;
    char com[6][4]={"BCG","BGC","CGB","CBG","GBC","GCB"};
    while((scanf("%lld",&bot[0]))!=EOF){
    {
        m=0;
        for(i=1;i<9;i++)
            scanf("%lld",&bot[i]);
    }
    combi[0]=cont(0,4,8);
    combi[1]=cont(0,5,7);
    combi[2]=cont(1,5,6);
    combi[3]=cont(1,3,8);
    combi[4]=cont(2,3,7);
    combi[5]=cont(2,4,6);
    for(i=0;i<6;i++)
        if(m<combi[i])
    {m=combi[i];
    j=i;
    }
    printf("%s %lld\n",com[j],m);
}
return 0;
}
