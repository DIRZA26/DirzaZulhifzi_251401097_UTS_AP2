#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim, namaMK;
    int jumlahMK, nilai, i = 1, total = 0;
    double rataRata;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);

    cout << "NIM: ";
    getline(cin, nim);

    cout << "Jumlah Mata Kuliah: ";
    cin >> jumlahMK;
    cin.ignore();

    while (i <= jumlahMK) {
        cout << "\nNama Mata Kuliah ke-" << i << ": ";
        getline(cin, namaMK);

        cout << "Nilai " << namaMK << ": ";
        cin >> nilai;
        cin.ignore();

        cout << namaMK << ": ";
        if (nilai >= 60)
            cout << "Lulus.\n";
        else
            cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";

        total += nilai;
        i++;
    }

    rataRata = (double) total / jumlahMK;
    cout << "\nNilai Rata-rata Semester ini: " << rataRata << endl;

    return 0;
}