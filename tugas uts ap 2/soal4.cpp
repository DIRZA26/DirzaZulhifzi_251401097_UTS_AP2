#include <iostream>
#include <string>
using namespace std;

int main() {
    string mantra;
    int i = 0, jumlahVokal = 0;

    cout << "Masukkan mantra: ";
    getline(cin, mantra);

    while (i < mantra.length()) {
        char c = mantra[i];

        if (c == 'a' || c == 'A' ||
            c == 'i' || c == 'I' ||
            c == 'u' || c == 'U' ||
            c == 'e' || c == 'E' ||
            c == 'o' || c == 'O') {
            jumlahVokal++;
        }

        i++;
    }

    if (jumlahVokal > 0)
        cout << "Kekuatan mantra: " << jumlahVokal << " vokal";
    else
        cout << "Mantra tidak valid! Tidak mengandung vokal.";

    return 0;
}