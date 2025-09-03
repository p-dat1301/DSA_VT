#include<bits/stdc++.h>
using namespace std;

vector<int> a[101];
bool check[101];


void BFS(int u){
    queue<int> q;
    q.push(u);
    check[u] = true;

    while(!q.empty()){
        int s = q.front(); q.pop();
        cout << s << " ";


        for(int i = 0; i < a[s].size(); i++){
            int v = a[s][i];
            if(check[a[s][i]] == false){
                q.push(v);
                check[a[s][i]] = true;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        memset(check, false, sizeof(check));
        for(int i = 0; i < 101; i++){
            a[i].clear();
        }
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }

        BFS(k);
        cout << endl;
    }
}