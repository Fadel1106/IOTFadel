#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Basis rekursi
    } else {
        return n * faktorial(n - 1); // Pemanggilan rekursif
    }
}

int main() {
    int angka;
    cout << "Masukkan bilangan: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
    } else {
        cout << "Faktorial dari " << angka << " adalah: " << faktorial(angka) << endl;
    }

    return 0;
}
