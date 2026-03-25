#include <bits/stdc++.h>
using namespace std;

// ALGORITMO O(NlogN)

int main() {
    int N;
    cin >> N;

    vector<int> v(N);   
    for (int i = 0; i < N; i ++) cin >> v[i];

    // 1) SPLITTIAMO PARI E DISPARI

    vector<int> p, d;
    for (int i = 0; i < N; i ++) {
        if (v[i] % 2) d.push_back(v[i]);
        else p.push_back(v[i]);
    }

    // cout << "vediamo i vettori p e d:" << endl;
    // for (int i = 0; i < p.size(); i ++) cout << p[i] << " ";
    // cout << endl;
    // for (int i = 0; i < d.size(); i ++) cout << d[i] << " ";
    // cout << endl;

    // 2) ORDINIAMOLI

    sort(d.begin(), d.end());
    sort(p.begin(), p.end());

    // cout << "vediamo i vettori p e d DOPO il sort:" << endl;
    // for (int i = 0; i < p.size(); i ++) cout << p[i] << " ";
    // cout << endl;
    // for (int i = 0; i < d.size(); i ++) cout << d[i] << " ";
    // cout << endl;

    // 2.5) LI INVERTIAMO

    reverse(d.begin(), d.end());
    reverse(p.begin(), p.end());

    // cout << "vediamo i vettori p e d DOPO il reverse:" << endl;
    // for (int i = 0; i < p.size(); i ++) cout << p[i] << " ";
    // cout << endl;
    // for (int i = 0; i < d.size(); i ++) cout << d[i] << " ";
    // cout << endl;

    // mostriamo alcuni modi equivalenti per reversare un vettore

    // for (int i = 0; i < N; i ++) swap(d[i], d[N - i - 1]);
    
    // for (int i = 0; i < N; i ++) {
    //     int k = d[i];
    //     d[i] = d[N - i - 1];
    //     d[N - i - 1] = k;
    // }

    // 3) PRENDIAMO I 2 MAGGIORI DI OGNI VETTORE E LI CONFRONTIAMO

    int mass_p = -1, mass_d = -1;

    if (p.size() >= 2) mass_p = p[0] + p[1];
    if (d.size() >= 2) mass_d = d[0] + d[1];

    int mass = max(mass_p, mass_d);

    cout << mass << endl;
}
