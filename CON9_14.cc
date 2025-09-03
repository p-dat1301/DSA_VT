#include<bits/stdc++.h>
using namespace std;

vector<int> a[101];
bool check[101];
int truoc[101];

void DFS(int u){
    check[u] = true;
    for(int i = 0; i < a[u].size(); i++){
        if(check[a[u][i]] == false){
            check[a[u][i]] = true;
            truoc[a[u][i]] = u;
            DFS(a[u][i]);
        }
    }
}
int main(){
    int l; cin >> l;
    int n, m;
    while(l--){
        cin >> n >> m;
        memset(check, false, sizeof(check));
        memset(truoc, 0, sizeof(truoc));
        for(int i = 0; i < 101; i++) a[i].clear();

        
        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }

        int q; cin >> q;
        while(q--){
            int t, s; cin >> t >> s;
            DFS(t);
            if(truoc[s] == 0) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}