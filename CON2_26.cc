#include<bits/stdc++.h>
using namespace std;
using ll = long long;

/*
ban dau tao 1 vector gom cac so nguyen to tu p + 1 den n

*/
int n, p, s;
vector<int> snt;
bool check[200];

void Sang(){
    memset(check, true, sizeof(check));
    for(int i = 2; i <= s; i++){
        if(check[i] == true){
            if(i >= p + 1){
                snt.push_back(i);
            }
            for(int j = i * i; j <= s; j += i)
        }
    }
}