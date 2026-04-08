// https://training.olinfo.it/task/ois_teams

#include <bits/stdc++.h>
using namespace std;

int res(int A, int B) {
    if (A == 0) return 0;
    if (B == 0) return 0;
    if (A + B < 4) return 0;

    if (A < B) {
        swap(A, B);
    }

    if (A == B) {
       return 1 + res(A - 2, B - 2); 
    }
    else {
        return 1 + res(A - 3, B - 1);
    }
}

int main() {
    int A; cin >> A;
    int B; cin >> B;

    cout << res(A, B) << endl;
}
