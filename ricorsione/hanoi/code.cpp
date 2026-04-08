// https://cses.fi/problemset/task/2165

#include <bits/stdc++.h>
using namespace std;

int hanoi_mosse(int N, int a, int b) {
    // CASO BASE
    if (N == 1) return 1;
    // CASO RICORSIVO
    int res = 0;
    res += hanoi_mosse(N - 1, a, 6 - a - b);
    res ++;
    res += hanoi_mosse(N - 1, 6 - a - b, b);
    return res;
}

void hanoi(int N, int a, int b) {
    // CASO BASE
    if (N == 1) {
        cout << a << " " << b << endl;
        return;
    }
    // CASO RICORSIVO
    hanoi(N - 1, a, 6 - a - b);
    cout << a << " " << b << endl;
    hanoi(N - 1, 6 - a - b, b);
    return;
}

int main() {
    int N;
    cin >> N;
    cout << hanoi_mosse(N, 1, 3) << endl;
    hanoi(N, 1, 3);
}
