#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, y, k, q;

	map<string, vector<int>>trips;
	string str;

	cin >> n;
	while(n--){
		cin >> str >> y;
		trips[str].push_back(y);
	}


	
	//cout << trips["Iceland"][1];

	for(map<string, vector<int>>::iterator it = trips.begin() ; it != trips.end(); it++){
		
		//cout << it->first << ": ";
		sort(it->second.begin(), it->second.end());

		//for(int i = 0; i < it->second.size(); i++)
		//	cout << it->second[i] << " ";
		//cout << "\n";
	}

	cin >> q;
	string req;
	while(q--){
		cin >> req >> k;
		cout << trips[req][k-1] << "\n";
	}

	return 0;
}
