#include<bits/stdc++.h>
using namespace std;

vector<int> a[101];
bool check[101];

void DFS(int u){
    check[u] = true;
    cout << u << " ";
    for(int i = 0; i < a[u].size(); i++){
        if (check[a[u][i]] == false){
            DFS(a[u][i]);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        memset(check, false, sizeof(check));
        for(int i = 0; i < 101; i++){
            a[i].clear();
        }
        int n, m, k; cin >> n >> m >> k;
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            a[u].push_back(v);
        }

        DFS(k);
        cout << endl;
    }
}