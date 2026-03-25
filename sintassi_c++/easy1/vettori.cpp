#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vettore(N);
    
    for (int i = 0; i < N; i ++) {
        cin >> vettore[i];    
    }

    int m = -1000000; // -infinito
    for (int i = 0; i < N; i ++) {
        m = max(m, vettore[i]);
    }
    cout << m << endl;

}
