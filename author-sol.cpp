#include <bits/stdc++.h>
using namespace std;

/*

Serving player wins = holds serve (H)
Receiving player wins = breaks serve (B)

2 1
3 games

maintain 2 1 in every scenario:

a b a
H B B = 2
H H H = 0
B B H = 2

b a b
B H H = 1
B B B = 3
H H B = 1

answer:
4
0 1 2 3

------------------------------------------------

1 1
2 games

maintain 1 1 in every possibility:

a b
H H = 0
B B = 2

b a
B B = 2
H H = 0

answer:
2
0 2

------------------------------------------------

0 5
5 games

maintain 0 5 in every scenario:

a b a b a
B H B H B = 3

b a b a b
H B H B H = 2

answer:
2
2 3

*/

void test_case() {
    int a, b;
    cin >> a >> b;
    int d = abs(a - b) / 2;
    vector<int> vec;
    if ((a + b) % 2 == 0) {
        for (int i = d; i <= a + b - d; i += 2) {
            vec.push_back(i);
        }
    } else {
        for (int i = d; i <= a + b - d; i++) {
            vec.push_back(i);
        }
    }
    cout << (int) vec.size() << "\n";
    for (int x : vec) {
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
