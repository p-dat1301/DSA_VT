#include<bits/stdc++.h>
using namespace std;

int n;
string X;

void Try(int i){
    for(char j = 'A'; j <= 'B'; j++){
        X[i] = j;
        if (i == n){
            for(int k = 1; k <= n; ++k)
                cout << X[k];
            cout << " ";
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        X = string(n + 1, ' ');
        Try(1);
        cout << endl;
    }
}