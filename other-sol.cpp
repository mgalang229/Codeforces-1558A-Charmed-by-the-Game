#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int a, b;
    cin >> a >> b;
    set<int> s;
    int odd_pos = (a + b) / 2;
    int even_pos = (a + b - odd_pos);
    for (int i = 0; i <= odd_pos; i++) {
        int a0 = i;
        int a1 = a - i;
        int b0 = odd_pos - a0;
        int b1 = even_pos - a1;
        if (a1 < 0 || b0 < 0 || b1 < 0) {
            continue;
        }
        s.insert(a0 + b1);
    }
    for (int i = 0; i <= even_pos; i++) {
        int a0 = i;
        int a1 = a - i;
        int b0 = odd_pos - a0;
        int b1 = even_pos - a1;
        if (a0 < 0 || a1 < 0 || b0 < 0 || b1 < 0) {
            continue;
        }
        s.insert(a1 + b0);
    }
    cout << (int) s.size() << "\n";
    for (int x : s) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        test_case();
    }
}
