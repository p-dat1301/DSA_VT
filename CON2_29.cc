#include<bits/stdc++.h>
using namespace std;

/*
ý tưởng: cần 1 mảng 2 chiều để lưu ma trận
tạo xâu s để lưu các bước 
nếu i + 1 <= n và a[i + 1][j] = 1 => s + 'D'
nếu j + 1 <= m và a[i][j + 1] = 1 => s + 'R'
*/

int a[100][100], n, m, cnt;
string s;

void Try(int i, int j){
    if(i == n - 1 && j == m - 1){
        ++cnt;
    }
    
    else{
        if(i + 1 < n && a[i + 1][j] != 0){
            Try(i + 1, j);
        }
        if(j + 1 < m && a[i][j + 1] != 0){
            Try(i, j + 1);
        }
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        Try(0,0);
        cout << cnt << endl;
    }
    
}