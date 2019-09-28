#include <bits/stdc++.h>
using namespace std;
char ch[110][110],str[110][110];
int p;
void abc(int x,int y)
{
    if(str[x][y])return;
    str[x][y]=1;
   //printf("%d %d\n",x,y);
    if(ch[x][y]!='.')return;
     p++;
    //abc(x-1,y-1);
    abc(x-1,y);
    //abc(x-1,y+1);
    abc(x,y+1);
    //abc(x+1,y+1);
    abc(x+1,y);
    //abc(x+1,y-1);
    abc(x,y-1);
}

int main()
{
   int m,n,a,b,c,i,j,k,l,s,po,d;
  for(i=0;i<=110;i++)
    ch[i][0]='0';
  for(j=0;j<=110;j++)
    ch[0][j]='0';
  scanf("%d",&d);
  for(k=1;k<=d;k++)
    {


    scanf("%d%d",&n,&m);
      p=0;
        getchar();
        for(i=1;i<=m;i++)
        {

            for(j=1;j<=n;j++){
                    str[i][j]=0;
                scanf("%c",&ch[i][j]);
            }
             getchar();
        }
    for(i=0;i<=102;i++)ch[i][n+1]='0';
    for(i=0;i<=102;i++)ch[m+1][i]='0';
        //s=0;
        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++)
              if(!str[i][j]&&ch[i][j]=='@'){
                ch[i][j]='.';
                abc(i,j);
                 //s++;
              }
        printf("Case %d: %d\n",k,p);


  }
}

/*
4
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.
11 9
.#.........
.#.#######.
.#.#.....#.
.#.#.###.#.
.#.#..@#.#.
.#.#####.#.
.#.......#.
.#########.
...........
11 6
..#..#..#..
..#..#..#..
..#..#..###
..#..#..#@.
..#..#..#..
..#..#..#..
7 7
..#.#..
..#.#..
###.###
...@...
###.###
..#.#..
..#.#..
*/
