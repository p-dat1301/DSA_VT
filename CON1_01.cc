#include<bits/stdc++.h>
using namespace std; 

// Xâu nhị phân kế tiếp

void NextBinaryString(string &s){
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if (i >= 0) s[i] = '1';
}

int main(){
    int t; cin >> t;
    while (t--){
        string s;
        cin.ignore();
        cin >> s;
        NextBinaryString(s);
        for(char x: s) cout << x;
        cout << endl;
    }
}