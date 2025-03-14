#include <bits/stdc++.h>
using namespace std;

int n, final;
int a[100];

// Khoi tao hoan vi dau tien
void init() {
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
    final = 0;
}

// Ham sinh hoan vi ke tiep
void sinh() {
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]) {
        --i;
    }
    if (i == 0) {
        final = 1;
    } else {
        int j = n;
        while (a[i] > a[j]) {
            --j;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        init(); // Khởi tạo lại hoán vị đầu tiên
        vector<vector<int>> results; // Đặt lại kết quả cho test case mới

        while (!final) {
            results.push_back(vector<int>(a + 1, a + n + 1));
            sinh();
        }

        for (const auto &perm : results) {
            for (int x : perm) {
                cout << x;
            }
            cout << ' ';
        }
        cout << endl;
    }
}
