#include <iostream>
#include <string>
using namespace std;

int main() {
    string biner;
    cout<<"Input Kode Biner: ";
    cin >> biner;

    int desimal = 0;
    bool valid = true;

    for (int i = 0; i < biner.length(); i++) {
        if (biner[i] != '0' && biner[i] != '1') {
            valid = false;
            break;
        }
        desimal = desimal * 2 + (biner[i] - '0');
    }

    if (valid) {
        cout << "Angka desimal dari biner " << biner << " adalah = " << desimal;
    } else {
        cout << "Pesan Rusak!";
    }

    return 0;
}