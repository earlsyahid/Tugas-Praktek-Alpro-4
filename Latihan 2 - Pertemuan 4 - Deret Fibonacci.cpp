#include <iostream>
using namespace std;

int main () {
    int n, t1 = 0, t2 = 1, ts;
    cout << "Masukkan nomor fibonacci: ";
    cin >> n;

    for (int i = 1; i <=n; i++) {
        cout << t1 << " ";
        ts = t1 + t2;
        t1 = t2;
        t2 = ts;
    }
    return 0;
}
