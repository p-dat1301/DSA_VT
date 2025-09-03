#include<bits/stdc++.h>
using namespace std;

vector<int> a[101];
bool check[101];


void DFS(int u){
    check[u] = true;
    for(int i = 0; i < a[u].size(); i++){
        if(check[a[u][i]] == false){
            check[a[u][i]] = true;
            DFS(a[u][i]);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        memset(check, false, sizeof(check));
        for(int i = 0; i < 101; i++) a[i].clear();
        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(check[i] == false){
                cnt++;
                DFS(i);
            }
        }
        cout << cnt << endl;
    }
}