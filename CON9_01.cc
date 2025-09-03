#include<bits/stdc++.h>
using namespace std;
vector<int> v[101];


int main(){
    int t = 1;
    while(t--){
        int n; cin >> n;
        int a[101][101];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j] == 1){
                    v[i].push_back(j);
                }
            }
            sort(v[i].begin(), v[i].end());
        }
        for(int i = 1; i<= n; i++){
            cout << i << ": ";
            for(int j = 0; j < v[i].size(); j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }


    }
}