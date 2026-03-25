#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);   
    for (int i = 0; i < N; i ++) cin >> v[i];

    int mass = -1;
    for (int i = 0; i < N; i ++) {
        for (int j = i + 1; j < N; j ++) {
            int sum = v[i] + v[j];
            if (sum % 2) continue;
            mass = max(mass, sum);
        }
    }

    cout << mass << endl;
}
