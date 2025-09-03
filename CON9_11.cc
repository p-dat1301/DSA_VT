#include<bits/stdc++.h>
using namespace std;

vector<int> a[101];
bool check[101];
int truoc[101];

void DFS(int u){
    check[u] = true;
    for(int i = 0; i < a[u].size(); i++){
        if(check[a[u][i]] == false){
            truoc[a[u][i]] = u;
            DFS(a[u][i]);
        }
    }
}

int main(){
    int l; cin >> l;
    while(l--){
        int n, m, t, s; cin >> n >> m >> t >> s;
        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            a[u].push_back(v);
        }

        DFS(t);

        if(truoc[s] == 0) cout << -1 << endl;
        else{
            vector<int> res;
            int j = s;
            res.push_back(j);
            while(truoc[j] != t){
                res.push_back(truoc[j]);
                j = truoc[j];
            }
            res.push_back(t);

            reverse(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++){
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }
}