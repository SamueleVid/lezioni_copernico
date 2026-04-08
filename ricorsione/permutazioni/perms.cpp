#include <bits/stdc++.h>
using namespace std;

// Argomento: Backtracking

vector<int> perm;
vector<int> gia_usato;

void check(int N) {
    // in questo momento sono sicuro che perm è una permutazione di 1 ... N
    for (int i = 0; i < N; i ++) {
        cout << perm[i] + 1 << " ";
    }
    cout << endl;
}

void create_perm(int N, int L) {
    // N: lunghezza desiderata di perm, L: lunghezza corrente di perm
    if (L == N) {
        check(N);
        return;
    }
    for (int i = 0; i < N; i ++) {
        if (gia_usato[i] == 0) {
            gia_usato[i] = 1;
            perm.push_back(i);
            create_perm(N, L + 1);
            perm.pop_back();
            gia_usato[i] = 0;
        }
    }
}

int main() {
    int N; cin >> N;
    gia_usato.assign(N, 0);
    // stampo tutte le permutazioni di 1 ... N
    create_perm(N, 0);
}
