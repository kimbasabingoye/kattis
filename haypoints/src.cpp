#include <bits/stdc++.h>

using namespace std;

int main(){

	int m, n;

	map<string, int>dico;
	string w;
	int v;

	cin >> m >> n;
	
	while(m--){
		cin >> w >> v;
		dico[w] = v;
	}

	char c;
	string str;
	while(n--){
		int salary = 0;
		
		while((cin >> w) && (w != ".")){
			salary += dico[w];
		}
	
		cout << salary << "\n";
	}

	return 0;
}
