#include<bits/stdc++.h>
using namespace std;
int t,n,X[100],daxet[100];

void in(){
    for(int i = 1; i <= n; i++){
        cout << X[i];
    }
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(daxet[j] == 0){
            X[i] = j;
            daxet[j] = 1;
            if (i == n){
                in(); cout << " ";
            }
            else Try(i + 1);
            daxet[j] = 0;
        }
    }
}

int main(){
    cin >> t;
    while(t--){
        memset(daxet, 0, sizeof(daxet));
        cin >> n;
        Try(1);
        cout << endl;
    }
}