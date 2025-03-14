#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n];
    for (int &i : a) {
        cin >> i;
        sum += i;
    }
    sort(a, a + n);
    k = min(k, n - k);
    for (int i = 0; i < k; ++i) {
        sum -= 2 * a[i];
    }
    cout << sum;
}

int main() {

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}