#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m;

	while(scanf("%d %d", &n, &m)){
		if( (n == 0) && (m == 0))
			break;
		vector<int> v, v2, inter;
		int i;
		while(n--){
			cin >> i;
			v.push_back(i);
		}

		int tmp, ans = 0;
		while(m--){
			cin >> tmp;
			v2.push_back(tmp);
		}

		set_intersection(v.begin(), v.end(), v2.begin(), v2.end(), back_inserter(inter));

		cout << inter.size() << "\n";
	}

	return 0;
}
