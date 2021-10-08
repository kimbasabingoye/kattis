#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;

	while(scanf("%d", &n) && n != -1){
		int s, prev_t = 0, cur_t, ans = 0;
		while(n--){
			scanf("%d %d", &s, &cur_t);
			ans += s * (cur_t - prev_t);
			prev_t = cur_t;
		}
		printf("%d miles\n", ans);
	}

	return 0;
}

