#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void getFactors(int num, int factors[], int &count) {
    count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            factors[count++] = i;
        }
    }
}

int main() {
    int batas;

    cout << "Masukkan batas: ";
    cin >> batas;

    int ganjil[1000], genap[1000], prima[1000];
    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            genap[jumlahGenap++] = i;
        } else {
            ganjil[jumlahGanjil++] = i;
        }

        if (isPrime(i)) {
            prima[jumlahPrima++] = i;
        }
    }

    int factors[1000], count;

    cout << "\nBilangan Ganjil: " <<endl;
    for (int i = 0; i < jumlahGanjil; i++) {
        cout << ganjil[i] << " (Faktor: ";
        getFactors(ganjil[i], factors, count);
        for (int j = 0; j < count; j++) {
            cout << factors[j] << " ";
        }
        cout << ")\n";
    }

    cout << "\nBilangan Genap: " <<endl;
    for (int i = 0; i < jumlahGenap; i++) {
        cout << genap[i] << " (Faktor: ";
        getFactors(genap[i], factors, count);
        for (int j = 0; j < count; j++) {
            cout << factors[j] << " ";
        }
        cout << ")\n";
    }

    cout << "\nBilangan Prima: " <<endl;
    for (int i = 0; i < jumlahPrima; i++) {
        cout << prima[i] << " (Faktor: ";
        getFactors(prima[i], factors, count);
        for (int j = 0; j < count; j++) {
            cout << factors[j] << " ";
        }
        cout << ")\n";
    }

        cout << "\nJumlah Bilangan Ganjil: " << jumlahGanjil << endl;
        cout << "Jumlah Bilangan Genap: " << jumlahGenap << endl;
        cout << "Jumlah Bilangan Prima: " << jumlahPrima << endl;

    return 0;
}
