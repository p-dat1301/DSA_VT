#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[101][101];
    vector <int> v[101];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    /*
    duyet tu ma tran ke neu a[i][j] =  1 thi push vao 
    vector v[i].push_back[j]
    */
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1) v[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j]<< " ";
        }
        cout << endl;
    }

}