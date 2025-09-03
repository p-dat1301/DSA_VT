#include<bits/stdc++.h>
using namespace std;
int a[100],n;

bool Check(int a[], int n){
    int sum =  0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    if(sum % 2 == 0) return true;
    return false;
}


int main(){
    int t; cin >> t;
    while (t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(Check(a,n) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}