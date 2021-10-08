#include<bits/stdc++.h>

using namespace std;

int main() {
    int t, m, r, cur, ans = 0;
    stack<int>s, tmp;

    cin >> t;
    while(t--){
        cin >> m >> r;

        for(int i = m; i >= 1; i--)
			s.push(i);
        
        while(r--){
            ans = 0;
            cin >> cur;
            while(s.top() != cur){
                ans++;
                tmp.push(s.top());
                s.pop();
            }
            s.pop();
            while(!tmp.empty()){
                s.push(tmp.top());
                tmp.pop();
            }
            s.push(cur);
            cout << ans << " ";
        }
        cout << "\n";
    }

    return 0;
}