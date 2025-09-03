#include<bits/stdc++.h>
using namespace std;

int A[9][9];
int n, X[100], cot[100], cheo1[100], cheo2[100];
int sum = 0;
int res = INT_MIN;

void Try(int i){
    n = 8;
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && cheo1[n + i - j] == 0 && cheo2[i + j - 1] == 0){
            X[i] = j;
            cot[j] = 1;
            cheo1[n + i - j] = 1;
            cheo2[i + j - 1] = 1;
            sum += A[i][j];

            if(i == n){
                res = max(res, sum);
            }

            else Try(i + 1);
            cot[j] = 0; cheo1[n + i - j] = 0; cheo2[i + j - 1] = 0;
            sum -= A[i][j];
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> A[i][j];
            }
        }

        
        sum = 0;
        res = INT_MIN;

        Try(1);
        cout << res << endl;
    }
}