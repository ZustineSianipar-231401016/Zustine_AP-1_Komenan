#include <iostream>
#include <math.h>
#include <cctype>

using namespace std;

// Fungsi untuk menampilkan garis
void garis() {
    cout << "====================================" << endl; // Tampilkan garis
}

// Fungsi untuk menampilkan bintang
void bintang() {
    cout << "************************************" << endl; // Tampilkan bintang
}

// Fungsi untuk menampilkan menu
void menu() {
    garis(); // Tampilkan garis
    cout << "Selamat Datang di Program Kalkulator" << endl; // Tampilkan pesan selamat datang
    garis(); // Tampilkan garis
    cout << "1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \n5. Modulo \n6. Pangkat" << endl; // Tampilkan menu
    garis(); // Tampilkan garis
}

// Fungsi untuk melakukan operasi tambah
int tambah(int a, int b) {
    return a + b; // Kembalikan hasil tambah
}

// Fungsi untuk melakukan operasi kurang
int kurang(int a, int b) {
    return a - b; // Kembalikan hasil kurang
}

// Fungsi untuk melakukan operasi kali
int kali(int a, int b) {
    return a * b; // Kembalikan hasil kali
}

// Fungsi untuk melakukan operasi bagi
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b); // Kembalikan hasil bagi
}

// Fungsi untuk melakukan operasi modulo
int modulo(int a, int b) {
    return a % b; // Kembalikan hasil modulo
}

// Fungsi untuk melakukan operasi pangkat
int pangkat(int a, int b) {
    return pow(a, b); // Kembalikan hasil pangkat
}

int main() {
    char cont; // Variabel untuk input kontinu

    do {
        system("cls"); // Bersihkan layar

        menu(); // Tampilkan menu

        int operation, a, b, hasil; // Variabel untuk operasi, angka pertama, angka kedua, dan hasil
        cout << "Masukkan operasi : ";
        cin >> operation; // Input operasi

        cout << "Masukkan angka pertama : ";
        cin >> a; // Input angka pertama

        cout << "Masukkan angka kedua : ";
        cin >> b; // Input angka kedua

        switch(operation) {
            case 1:
                hasil = tambah(a, b); // Lakukan operasi tambah
                break;
            case 2:
                hasil = kurang(a, b); // Lakukan operasi kurang
                break;
            case 3:
                hasil = kali(a, b); // Lakukan operasi kali
                break;
            case 4:
                hasil = bagi(a, b); // Lakukan operasi bagi
                break;
            case 5:
                hasil = modulo(a, b); // Lakukan operasi modulo
                break;
            case 6:
                hasil = pangkat(a, b); // Lakukan operasi pangkat
                break;
        }

        cout << "Hasil = " << hasil << endl; // Tampilkan hasil

        bintang(); // Tampilkan bintang

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont; // Input kontinu
    } while(toupper(cont) == 'Y'); // Lakukan perulangan jika input kontinu adalah 'Y'

    cout << "Terima kasih telah menggunakan program kalkulator" << endl; // Tampilkan pesan terima kasih
    return 0; // Tutup program
}