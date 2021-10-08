#include <bits/stdc++.h>

using namespace std;

int main(){
	stack<char> s, ans;
	char c;
	while(scanf("%c", &c) != EOF ){
		if(c == '<'){
			//cout << "1";
			s.pop();
		} else{
			s.push(c);
			//cout << "0";
		}
	}
	while(!s.empty()){
		ans.push(s.top());
		s.pop();
	}
		//cout << ans.size();
	while(!ans.empty()){
		printf("%c", ans.top());
		ans.pop();
	}


	return 0;
}
