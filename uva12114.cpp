#include <bits/stdc++.h>
using namespace std;


int main() {
	for (int t = 1; ; t++) {
		int B, S;
		scanf("%d%d", &B, &S);
		if (!B && !S) break;

		printf("Case %d: ", t);

		if (B <= 1) printf(":-\\\n");
		else if (B <= S) printf(":-|\n");
		else printf(":-(\n");
	}
	return 0;
}

