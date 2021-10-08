#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T, n;
	scanf("%d %d", &n, &T);

	int ans = 0, sum = 0, tmp;
	while(n--){
		scanf("%d", &tmp);
		if((sum + tmp) <= T){
			sum += tmp;
			ans++;
		}else
			break;
	}
	printf("%d\n", ans);
	
	return 0;
}

