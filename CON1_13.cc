/*
ý tưởng là sinh ra xâu nhị phân AB nhưng kèm theo 1 hàm check với yêu cầu của đề bài
*/
#include<bits/stdc++.h>
using namespace std;
vector<string> res;

int n, a[100],k;

bool Check(){
    int dem = 0, ans = 0;
    for (int i = 1; i <= n; i++){
        if( a[i] == 0){
            dem++;
        }
        else dem = 0;

        if(dem > k) return false;
        if(dem == k) ans++;
    }
    return ans == 1;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if( i == n){
            if(Check()){
                string tmp = "";
                for(int l = 1; l <= n; l++){
                    if(a[l] == 0) tmp += "A";
                    else tmp += "B";
                }
                res.push_back(tmp);
            }
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    res.clear();
    Try(1);

    cout << res.size() << endl;
    for(string x : res){
        cout << x << endl;
    }
}