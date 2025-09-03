#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> a[101];
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s;
        getline(cin, s);
        int u;
        istringstream iss(s);
        while (iss >> u){
            a[i].push_back(u);
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < a[i].size(); j++){
            if(i < a[i][j]){
                cout << i << " " << a[i][j] << endl;
            }
        }
    }
}