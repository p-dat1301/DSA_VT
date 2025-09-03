#include<bits/stdc++.h>
using namespace std;

vector<int> a[101];
int vis[101];
bool check;

void BFS(int u){
    queue<int> q;
    q.push(u);
    vis[u] = 1;

    while(!q.empty()){
        if(check = true) break;

        int s = q.front(); q.pop();
        for(int i = 0; i < a[s].size(); i++){
            if(vis[a[s][i]] == 0){
                q.push(a[s][i]);
                vis[a[s][i]] = 1; // dang tham
            }

            else if(vis[a[s][i]] == 1){
                check = true;
            }
        }
        vis[u] = 2; //da tham
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        memset(vis, 0, sizeof(vis));
        for(int i = 0; i < 101; i++) a[i].clear();


        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        check = false;
        for(int i = 1; i <= n; i++){
            BFS(i);
            if(check == true){
                cout << "YES" << endl;
                break;
            }
        }
        if(check == false) cout << "NO" << endl;
    }
}