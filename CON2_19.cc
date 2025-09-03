#include<bits/stdc++.h>
using namespace std;

vector<int> res;

void in(vector<int> res, int n){
    cout << "[";
    for(int i = 0 ;i < n ; i++ ){
        if(i == n -1){
            cout << res[i];
        }
        else cout << res[i] << " ";
    }
    cout << "]";
    cout << endl;
}

void Try(vector<int> res, int n){
    in(res,n);
    for(int i = 0; i < n - 1 ; i++){
        res[i] = res[i] + res[i + 1];
    }
    if(n == 1) return;
    
    Try(res, n - 1);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        res.clear();
        res.resize(n);
        for(int i = 0; i < n; i++ ){
            cin >> res[i];
        }
        Try(res, n);
    }
}