// https://training.olinfo.it/task/collatz

#include <bits/stdc++.h>
using namespace std;

int collatz(int N) {
    if (N == 1) return 1;
    if (N % 2 == 0) return collatz(N / 2) + 1;
    if (N % 2 == 1) return collatz(3 * N + 1) + 1;
}

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N; 
    cin >> N;

    cout << collatz(N) << endl;
}
