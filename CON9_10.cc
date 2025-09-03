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
        memset(check, false, sizeof(check));
        memset(truoc,0, sizeof(truoc));
        for(int i = 0; i < 101; i++){
            a[i].clear();
        }
        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        DFS(t);

        if(truoc[s] == 0) cout << -1 << endl;
        else{
            int j = s;
            vector<int> res;
            res.push_back(s);
            while(truoc[j] != t){
                res.push_back(truoc[j]); // neu truoc[j] co phan tu nao thi ta day phan tu do vao va hoan doi vi tri cho j de tiep tuc vong lap
                j = truoc[j];
            }
            res.push_back(t); //diem cuoi cung

            reverse(res.begin(), res.end());

            for(int i = 0; i < res.size(); i++){
                cout << res[i] << " ";
            }
            cout << endl;
        }


    }
}