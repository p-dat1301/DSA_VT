#include<bits/stdc++.h>
using namespace std;

vector<int> a[101];
bool check[101];
int truoc[101];

void BFS(int u){
    queue<int> q;
    q.push(u);
    check[u] = true;
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(int i = 0; i < a[s].size(); i++){
            if(check[a[s][i]] == false){
                truoc[a[s][i]] = s;
                check[a[s][i]] = true;
                q.push(a[s][i]);
            }
        }
    }
}

int main(){
    int l; cin >> l;
    while(l--){
        int n, m, t, s; cin >> n >> m >> t >> s;
        memset(check, false, sizeof(check));
        memset(truoc, 0, sizeof(truoc));
        for(int i = 0; i < 101; i++){
            a[i].clear();
        }
        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        BFS(t);

        if(truoc[s] == 0) cout << -1 << endl;

        else{
            vector<int> res;
            int j = s;
            res.push_back(s);
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