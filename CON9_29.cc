#include<bits/stdc++.h>
using namespace std;
vector<int> a[101];

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int cnt = 0;
        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            a[u].push_back(v);

        }

        for(int i = 1; i <= n; i++){
            if(a[i].size() % 2 == 1) cnt++;
        }

        if(cnt == 0) cout << 1 << endl;
        else cout << 0 << endl;


    }
}