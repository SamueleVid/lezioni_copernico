// https://training.olinfo.it/task/collatz

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N; 
    cin >> N;

    int passaggi = 1;
    while (N != 1) {
        if (N % 2 == 0) {
            N = N / 2;
        }
        else {
            N = 3 * N + 1;
        }
        passaggi ++;
    }

    cout << passaggi << endl;
}
