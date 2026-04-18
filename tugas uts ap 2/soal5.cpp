#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks;
    int i = 0, jumlahKata = 0;
    bool dalamKata = false;

    cout << "Masukkan daftar judul buku: ";
    getline(cin, teks);

    while (i < teks.length()) {
        if (teks[i] != ' ' && dalamKata == false) {
            jumlahKata++;
            dalamKata = true;
        } else if (teks[i] == ' ') {
            dalamKata = false;
        }
        i++;
    }

    cout << "Jumlah judul buku: " << jumlahKata;

    return 0;
}