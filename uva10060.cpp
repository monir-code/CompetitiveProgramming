#include <stdio.h>
#include <math.h>
#define MAX 10001

double x[MAX], y[MAX];

double get_area(int p)
{
	int i, j;
	double sum1, sum2,sum3;
	sum1 = sum2 = 0;
	for(i=0,j=1;i<p;i++,j++)
	{
		if(j==p) j = 0;
		sum1 += x[i]*y[j];
		sum2 += y[i]*x[j];
	}
	sum3=((sum1>sum2)?(sum1-sum2):(sum2-sum1));
	return .5*sum3;
}

int main()
{
	int n, i, p;
	double t, vol, R, T, cnt, pi = acos(-1), cover;
	while(scanf("%d",&n)&&n)
	{
		vol = 0;
		for(i=0;i<n;i++)
		{
			p=1;
			scanf("%lf%lf%lf",&t,&x[0],&y[0]);
			while(scanf("%lf%lf",&x[p],&y[p])==2)
			{
				if(x[p]==x[0] && y[p]==y[0])
					break;
				p++;
			}
			vol += t*get_area(p);

		}
		scanf("%lf%lf",&R,&T);
		cover = pi*R*R*T;
		cnt = floor(vol/cover);
		printf("%.0lf\n",cnt);
	}
	return 0;
}

/*
2
2 0 0 0 5 5 5 10 5 10 0 0 0
2 0 0 0 5 5 5 10 5 10 0 0 0
*/
