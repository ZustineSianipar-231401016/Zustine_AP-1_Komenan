#include <iostream>

using namespace std;

int main() {
    // Goto Label
    a:
        cout << "Hello World" << endl; // Tampilkan "Hello World"
        goto d; // Lompat ke label "d"

    b:
        cout << "Universitas Sumatera Utara" << endl; // Tampilkan "Universitas Sumatera Utara"
        return 0; // Tutup program

    c:
        cout << "Fasilkom-TI" << endl; // Tampilkan "Fasilkom-TI"
        goto b; // Lompat ke label "b"

    d:
        cout << "Ilmu Komputer" << endl; // Tampilkan "Ilmu Komputer"
        goto c; // Lompat ke label "c"

    int i = 1;
    genap:
        if (i % 2 == 0) {
            cout << i << " "; // Tampilkan bilangan genap
        }
        i++;
    if (i <= 10) {
        goto genap; // Lompat ke label "genap" jika i kurang dari sama dengan 10
    } // Goto Label


    // While
    int i = 1;
    while(i <= 10) {
        if (i % 2 == 0) {
            cout << i << " "; // Tampilkan bilangan genap
        }
        i++;
    } // While


    // Do While
    int i = 1;
    do {
        cout << i << endl; // Tampilkan nilai i
    } while(i <= 0); // Lakukan perulangan jika i kurang dari sama dengan 0

    // For
    for(int i = 1; i <= 10; i+=2) {
        cout << "Hello World" << endl; // Tampilkan "Hello World"
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "* "; // Tampilkan asterisk
        }
        cout << endl; // Baris baru
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Tampilkan asterisk
        }
        cout << endl; // Baris baru
    }
}