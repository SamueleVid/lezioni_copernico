#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N), b(N);

    for (int i = 0; i < N; i ++) {
        cin >> a[i] >> b[i];
    }

    int mass = -1;
    for (int i = 0; i < N; i ++) {
        int sum = a[i] + b[i];
        if (sum % 2) continue;
        mass = max(mass, sum);
    }

    cout << mass << endl;
}
