#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int resto = N % 2;
    if (resto == 1) {
        cout << "dispari" << endl;
    }
    else {
        cout << "pari" << endl;
    }
}
