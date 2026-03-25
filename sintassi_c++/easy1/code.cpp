#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int massimo = -100000; // -infinito
    for (int i = 0; i < N; i ++) {
        int numero;
        cin >> numero;
        massimo = max(massimo, numero);
    }

    cout << massimo << endl;
}
