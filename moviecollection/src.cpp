#include <bits/stdc++.h>

using namespace std;

int main() {

	int t, m, r, cur, ans;
	deque<int> s;

	
	cin >> t;

	while(t--){
		cin >> m >> r;
		for(int i = m; i > 0; i--)
			s.push_back(i);

		while(r--){
			cin >> cur;
			deque<int>::iterator it = find(s.begin(), s.end(), cur); 
			ans = s.end() - it-1;
			//int val = *it;
			cout << ans << " ";
			s.erase(it);
			s.push_back(cur);
		}
		cout << "\n";

		s.clear();
	}

	return 0;
}
