/*
đi tìm i từ phải sang trái sao cho i là phần tử chưa max tọa vị trí của nó với công thức a[i]max = n - k + i
*/

#include<bits/stdc++.h>
using namespace std;


void Try(int n, int k, int a[1001]){
    int i = k;
    while(i >= 0 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }

    for(int i = 1; i <= k; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[1001];
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        Try(n, k, a);
        cout << endl;
    }
}