#include<bits/stdc++.h>
using namespace std;
/*ý tưởng: gọi một mảng khác sau đó gắn từng phần tử đó bằng a[i] + a[i+1] 
sau đó đệ quy mảng được gắn đó.*/


void in(vector<int> res, int n){
    cout << "[";
    for(int i = 0; i < n; i++){
        if(i != n - 1) cout << res[i] << " ";
        else cout << res[i];
    }
    cout << "]";
    cout << " ";
}

void Try(vector<int> res, int n){
    if(n == 0) return;
    vector<int> tmp(n - 1);
    for(int i = 0; i < n - 1; i++){
        tmp[i] = res[i] + res[i + 1];
    }
    Try(tmp, n - 1);
    in(res, n);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            cin >> res[i];
        }
        Try(res,n);
        cout << endl;
    }
}

