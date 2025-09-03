#include<bits/stdc++.h>
using namespace std;


int n, k, s;
int sum, cnt;

void Try(int i, int start) {
    for(int j = start; j <= n; j++){
        if(sum + j > s) break;

        sum += j;

        if(i == k && sum == s) cnt++;

        else{
            if(i < k) Try(i + 1, j + 1);
        }
        sum -= j;
    }
}
int main(){
    int t = 100;
    while(t--){
        cin >> n >> k >> s;
        cnt = 0;
        sum = 0;
        Try(1,1);
        cout << cnt << endl;
    }
}