#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X, N, tmp, sum = 0;

	scanf("%d", &X);
	scanf("%d", &N);
	
	//printf("X = %d N = %d\n", X, N);

	for(int i = 0; i < N; i++){
		scanf("%d", &tmp);
		//printf("%d ", tmp);
		sum += tmp;
	}
	//printf("\nsum = %d\n", sum);

	int ans = (X + X*N) - sum;
	printf("%d\n", ans);
	return 0;
}

