#include<bits/stdc++.h>
using namespace std;

int n, m, a[100];
bool check;
long long res;

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j; // ý tưởng là tạo ra 1 chuỗi nhị phân sau đó nhân chuỗi với 9 để được số thỏa mãn sau đó kiểm tra xem số đó có phải là bội của só input hay không
        if(i == m){// điều kiện dừng khi i == m nhưng m không cố định nếu check vẫn bằng true thì m tiếp tục tăng
            long long sum = 0;
            for(int k = 1; k <= m; k++){
                sum = sum *10 + a[k];
            }
            sum *= 9;

            if(sum % n == 0 && sum >= n){// điều kiện kiểm tra
                res = min(res, sum);
                check = false;
            }
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        m = 1;
        res = LLONG_MAX;
        check = true;
        while(m <= 15 && check == true){
            Try(1);
            m++;
        }
        cout << res << endl;
    }
}
