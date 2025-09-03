#include<bits/stdc++.h>
using namespace std;

/*
đặt quân hậu sao cho 2 không có 2 quân hậu nào ăn nhau với 
x1, x2, x3,...., xn với bàn cờ cỡ nxn
x1 = y : quân 1 đặt ở hàng thứ y
stt đường chéo chính cheo1 = n + (i - j)
stt đường chéo phụ cheo2 = (i + j) - 1
*/

int n, X[100], cot[100], cheo1[100], cheo2[100];
int cnt;

void Try(int i){
    for (int j = 1; j <= n; j++){
        if(cot[j] == 0 && cheo1[n + i - j] == 0 && cheo2[i + j - 1] == 0){
            X[i] = j;
            cot[j] = 1;
            cheo1[n + i - j] = 1;
            cheo2[i + j - 1] = 1;

            if(i == n){
                ++cnt;
            }
            else Try(i + 1);
            cot[j] = 0; cheo1[n + i - j] = 0; cheo2[i + j - 1] = 0;
        }
    } 
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}