// https://training.olinfo.it/task/ois_teams

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A; cin >> A;
    int B; cin >> B;

    int teams = 0;

    while ((A != 0) && (B != 0) && (A + B >= 4)) {
        // A >= B

        if (A < B) {
            swap(A, B);
        }
        if (A == B) {
            A = A - 2; // A -= 2
            B = B - 2; // B -= 2
        }
        else {
            A = A - 3; // A -= 3
            B = B - 1; // B -= 1
        }
        teams = teams + 1; // teams ++;
    }

    cout << teams << endl;
}
