#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    // Il comando "resto == 1" è un'operazione binaria che restituisce true o false. Generiamo in modo diverso un bool.
    // N % 2 ritorna un intero. Questo intero verrà convertito automaticamente in bool dall'if (false se 0, true se != 0).
    if (N % 2) {
        cout << "dispari" << endl;
    }
    else {
        cout << "pari" << endl;
    }
}
