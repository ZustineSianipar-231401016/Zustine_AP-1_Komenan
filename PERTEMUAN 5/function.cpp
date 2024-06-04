#include <iostream>
#include "function_header.h"
#include "preprocessor.h"

// Fungsi untuk menambah dua bilangan
int tambah(int a, int b) {
    return a + b; // Kembalikan hasil tambah
}

// Fungsi untuk mengurangi dua bilangan
int kurang(int a, int b) {
    return a - b; // Kembalikan hasil kurang
}

// Prosedur untuk menampilkan garis
void garis() {
    cout << "==========" << endl; // Tampilkan garis
}

// Prosedur untuk menampilkan bintang
void bintang() {
    cout << "*********" << endl; // Tampilkan bintang
}

begin
    // Deklarasi variabel
    int n;

    // Tampilkan garis
    garis();

    // Tampilkan hasil operasi tambah
    cout << "Tambahan : " << tambah(2, 3) << endl;

    // Tampilkan hasil operasi kurang
    cout << "Kurangan : " << kurang(2, 3) << endl;

    // Tampilkan hasil operasi kali
    cout << "Kali : " << kali(2, 3) << endl;

    // Tampilkan hasil operasi bagi
    cout << "Bagi : " << bagi(2, 3) << endl;

    // Tampilkan bintang
    bintang();

    // Tampilkan nilai PI
    cout << "Nilai PI : " << PI << endl;

    // Tampilkan bintang
    bintang();

    // Tampilkan pesan untuk meminta input
    cout << "Masukkan angka : ";

    // Input angka
    cin >> n;

    // Tampilkan angka
    cout << "Angka yang diinput : " << n << endl;

end