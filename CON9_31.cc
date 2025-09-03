#include<bits/stdc++.h>
using namespace std;

vector<int> a[101];
bool check[101];

void DFS(int u){
    check[u] = true;
    for(int i = 0; i < a[u].size(); i++){
        if(check[a[u][i]] == false){
            DFS(a[u][i]);
        }
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < 101; i++) a[i].clear();
        memset(check,false,sizeof(check));

        for(int i = 1; i <= n - 1; i++){
            int u, v; cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        bool isLienThong = true;
        for(int i = 0; i <= n; i++){
            if(check[i] == false){
                isLienThong = false;
                break;
            }
        }

        if(isLienThong) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}