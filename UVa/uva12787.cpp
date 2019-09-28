#include <bits/stdc++.h>
using namespace std;
int test(int n, int b) {
	if (base < 2)	return 0;
	static int a[128];
	int m = 0;
	for (int i = 0; n; i++, m++)
		a[i] = n%b, n /= b;
	for (int i = 0, j = m-1; i < j; i++, j--)
		if (a[i] != a[j])
			return 0;
	return 1;
}

int main() {
	int n;
	while (scanf("%d", &n) == 1) {
		if (n == 1) {
			puts("2");
			continue;
		} else if (n == 2) {
			puts("3");
			continue;
		}
#define INF 0x3f3f3f3f
		int ret = INF;
		for (int b = 2; b * b <= n; b++) {
			if (test(n, b)) {
				ret = b;
				break;
			}
			if (test(n, n/b - 1)) {
				ret = min(ret, n/b - 1);
			}
		}
		if (ret == INF)
			ret = n - 1;
		printf("%d\n", ret);
	}
	return 0;
}

