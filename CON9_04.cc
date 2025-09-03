#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    int a[101][101];
    for (int i = 1; i <= n; i++){
        string s;
        getline(cin, s);
        istringstream iss(s);
        int u;
        while(iss >> u){
            a[i][u] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}