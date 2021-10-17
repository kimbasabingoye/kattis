#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;


#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i = a; i <= b; i++)

int main(){
	int T, rc = 1;
	cin >> T;
	while(T--){

		vector<string>ing;
		vector<double>rc_p;
		vector<double>rc_w;
		int R, P, D;
		double w, p;
		string str;
		int main_ing;


		cin >> R >> P >> D;

		for(int i = 0; i < R; i++){
			cin >> str >> w >> p;
			if(p == 100)
				main_ing = i;
			ing.push_back(str);
			rc_w.push_back(w);
			rc_p.push_back(p);
		}
		/*for(int i = 0; i < R; i++){
			cout << ing[i];
			printf(" %.2lf %.2lf\n", rc_w[i], rc_p[i]);
		}*/

		//cout << "Main Ingredient: " << ing[main_ing] << "\n";

		double scaling_factor = (double)D/P;
		//cout << scaling_factor << "\n";
		double main_sc_w = rc_w[main_ing] * scaling_factor;

		//cout << main_sc_w << "\n";

		rc_w[main_ing] = main_sc_w;

		cout << "Recipe # " << rc++ << "\n";
		
		for(int i = 0; i < R; i++){
				rc_w[i] = main_sc_w * (rc_p[i]/100);
			//cout << ing[i];
			//printf(" %.2lf\n", rc_w[i]);
		}
		for(int i = 0; i < R; i++){
			cout << ing[i];
				printf(" %.1lf\n", rc_w[i]); /*
			if(i == main_ing){
				cout << ing[i];
				printf(" %.1lf\n", rc_w[i]);
			} else{	
				cout << ing[i];
				printf(" %.1lf\n", rc_w[i]/100);
			}*/
			
		}
		for(int i = 0; i < 40 ; i++)
			cout << "-";
		cout << "\n";
	}

	return 0;
}
