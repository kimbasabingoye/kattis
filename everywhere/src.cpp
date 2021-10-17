#include<bits/stdc++.h>

using namespace std;

int main() {
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        string tmp;
        set<string>s;
        for(int i = 0; i< n; i++){
            cin >> tmp;
            s.insert(tmp);
        }
        cout << s.size() << "\n";
    }
    
}
