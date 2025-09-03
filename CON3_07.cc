#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    int t; cin >> t;
     while (t--){
        int n; cin >> n;
        vector<ll> a(n),b(n);
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(a.begin(), a.end());
        ll sum = 0;
        for(int i = 0; i < a.size(); i++){
            sum += a[i] * b [i];
        }
        cout << sum << endl;
     }
}