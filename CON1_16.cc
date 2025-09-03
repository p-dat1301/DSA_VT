#include<bits/stdc++.h>
using namespace std;

int a[100][100], x[100];
bool check[100];
int n, k;
vector<vector<int>> res;

void Try(int i){
    for (int j = 1; j <= n; j++){
        if(check[j] == true){
            x[i] = j;
            check[j] = false;

            if(i == n){
                int sum = 0;
                for(int l = 1; l <= n; l++){
                    sum +=a[l][x[l]];
                }
                if(sum == k){
                    vector<int> tmp;
                    for(int l = 1; l <= n; l++){
                        tmp.push_back(x[l]);
                    }
                    res.push_back(tmp);
                }
            }

            else Try(i + 1);
            check[j] = true;
        }
    }
}

int main(){
    int t = 1;
    while(t--){
        cin >> n >> k;
        res.clear();
        for(int i = 1; i <= n; i++){
            check[i] = true;
            for(int j = 1; j <= n; j++){
                cin  >> a[i][j];

            }
        }
        Try(1);
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++){
            for (int j = 0 ; j < res[i].size(); j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}