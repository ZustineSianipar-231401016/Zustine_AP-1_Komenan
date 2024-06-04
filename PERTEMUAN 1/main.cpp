#include <iostream>

using namespace std;

int main() {
    string nama; // Variabel untuk nama
    int nim; // Variabel untuk nomor indentifikasi mahasiswa
    char kom; // Variabel untuk kode komputer
    float ip; // Variabel untuk indeks prestasi

    cout << "Hello World" << endl; // Tampilkan "Hello World"

    cout << "Masukkan Nama : "; // Tampilkan pesan untuk meminta nama
    // cin >> nama;
    getline(cin, nama); // Baca nama dari input

    cout << "Masukkan NIM : "; // Tampilkan pesan untuk meminta NIM
    cin >> nim; // Baca NIM dari input

    cout << "Masukkan KOM : "; // Tampilkan pesan untuk meminta kode komputer
    cin >> kom; // Baca kode komputer dari input

    cout << "Masukkan IP : "; // Tampilkan pesan untuk meminta indeks prestasi
    cin >> ip; // Baca indeks prestasi dari input

    cout << "NAMA : " << nama << endl; // Tampilkan nama
    cout << "NIM : " << nim << endl; // Tampilkan NIM
    cout << "KOM : " << kom << endl; // Tampilkan kode komputer
    cout << "IP : " << ip << endl; // Tampilkan indeks prestasi
}