#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string teks = "programming";
    map<char, int> frekuensi;

    // Hitung frekuensi tiap karakter
    for (char c : teks) {
        frekuensi[c]++;
    }

    // Tampilkan hasil
    cout << "Frekuensi karakter:" << endl;
    for (auto pair : frekuensi) {
        cout << "'" << pair.first << "': " << pair.second << endl;
    }

    return 0;
}
