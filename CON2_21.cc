#include<bits/stdc++.h>
using namespace std;

vector<int> x(100);
vector<int> check(100);
string s;

void Try(int i){
    for(int j = 0; j < s.size(); j++){
        if(check[j] == 0){
            x[i] = j;
            check[j] = 1;
            if (i == s.size()){
                for(int k = 1;k <= s.size();k++){
                    cout << s[x[k]];
                }
                cout << " ";
            }
            else Try(i + 1);
            check[j] = 0;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            check[i] = 0;
        }
        Try(1);
        cout << endl;
    }
}