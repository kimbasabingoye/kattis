#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, tmp;
	vector<int> v;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
	for(int i = v.size()-1; i >=0; i--)
		printf("%d\n", v[i]);
	
	return 0;
}

