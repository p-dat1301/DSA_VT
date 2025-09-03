#include<bits/stdc++.h>
using namespace std;

/*
Ý tưởng: đầu tiên tạo hàm sinh hoán vị kế tiếp
tạo set để lưu tập hợp ban đầu

*/
int n, k, a[1000];
set<int> s;

void ktao(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i) --i;
    if(i == 0){ // cau hinh cuoi cung
        cout << k << endl; // tat ca moi nguoi duoc nghi
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
        int cnt = 0;
        for (int i = 1; i <= k; i++){
            if(s.count(a[i]) == 1) ++cnt;
        }
        cout << k - cnt << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        sinh();
        s.clear();
    }
}
