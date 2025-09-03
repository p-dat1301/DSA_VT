#include<bits/stdc++.h>
using namespace std;

/*
duyệt từ phần tử áp cuối về trái sao cho tìm được i sao cho a[i] < a[i + 1]
sau đó tìm k từ phải sang trái sao cho a[k] > a[i]
cuối cùng đổi chỗ a[k] và a[i] rồi reverse từ i + 1 đến end;
*/


void Try(int n, int a[1001]){
    int i = n - 1;
    while(i >= 0 && a[i] >= a[i + 1]) i--;

    if(i == 0){
        for(int i = 1; i <= n; i++) a[i] = i;
    }
    else{
        int k = n;
        while(a[k] <= a[i]){
            k--;
        }
        swap(a[i],a[k]);
        reverse(a + i +1, a + n + 1);
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        int a[1001];
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        Try(n,a);
        cout << endl;
    }
}