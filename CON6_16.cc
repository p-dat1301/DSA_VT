#include<bits/stdc++.h>
using namespace std;

void QuickSort(int a[], int l, int r){
    int p = (a[(l+r)/2]);
    int i = l, j = r;
    while(i < j){
        while(a[i] < p) i++;
        while(a[j] > p) j--;
        
        if(i <= j){
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if(i < r) QuickSort(a, i, r);
    if (l < j) QuickSort(a, l, j);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        QuickSort(a, 0, n-1);
        for (int x : a) cout << x << " ";
        cout << endl;
    }
}