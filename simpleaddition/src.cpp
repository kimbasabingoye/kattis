#include <bits/stdc++.h>

using namespace std;

int main(){

	string a, b, c = "";
	cin >> a >> b;

	//cout << a << " " << b << "\n";

	//cout << a[0] - '0' << "\n";
	
	//cout << a << "\n";

	if(a.size() < b.size())
		swap(a, b);
	
	//cout << a << "\n";
	
	int len = b.size();

	deque<int> ans;

	int x, y, r = 0, tmp, j = a.size()-1;
	for(int i = len-1; i >= 0; i--){
		x = a[j] - '0';
		y = b[i] - '0';
		tmp = x + y + r;

		ans.push_front(tmp % 10);
		r = tmp / 10;
		j--;
	}
	if(r != 0){
		if (j < 0){
			ans.push_front(r);
		} else{
			while(j >= 0){
				x = a[j] - '0'+ r;
				ans.push_front( x % 10);
				r = x / 10;
				j--;
			}
			if(r != 0)
				ans.push_front(r);
		}
	} else{
		while(j >=0){
		  ans.push_front(a[j]-'0'); j--;
		}
	}

	for(int i = 0; i < ans.size(); i++)
		cout << ans[i];
	cout << "\n";

	//c  += (a[0] + b[0] - '0');

	//cout << c << "\n";
	return 0;
}
