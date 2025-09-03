/*
ban đầu sẽ tìm i sao cho a[i] < a[i + 1]
sau đó sẽ tìm k sao cho a[i] < a[k] k nằm bên phải i
sau đó đổi chỗ a[k] và a[i] và sort đoạn từ i + 1 đến end để được hoán vị nhỏ nhất
*/
#include<bits/stdc++.h>
using namespace std;


void HoanViKeTiep(string &a, long long n){
    int i = a.size() - 2; // duyet tu phan tu ap cuoi
    while(i >= 0 && a[i] >= a[i+1]) i--;
    if (i >= 0){
        int k = a.size() - 1;
        while(a[k] <= a[i]) k--;

        swap(a[i],a[k]);

        reverse(a.begin() + i + 1, a.end());

        cout << n <<" "<< a << endl;
    }
    else{
        cout << n << " BIGGEST" << endl;
    }
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        long long n; cin >> n;
        cin.ignore();
        string a;
        getline(cin,a);
        HoanViKeTiep(a,n);
    }
}