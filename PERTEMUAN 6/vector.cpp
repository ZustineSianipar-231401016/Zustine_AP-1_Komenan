#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls");

    //? Deklarasi dan Inisialisasi Vector
    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Doni", "Yanto"};

    //? Mengakses Element-Element dalam Vector
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }

    //? Mengakses Element-Element dalam Vector menggunakan For Each Loop
    for (string karyawan : nama_karyawan) {
        cout << karyawan << endl;
    }

    //? Menambahkan Data ke Vector
    nama_karyawan.push_back("Wawan");

    //? Menghapus Data dari Vector
    nama_karyawan.pop_back();       // Menghapus data vector paling akhir
    nama_karyawan.erase(nama_karyawan.begin() + 3);     // begin() untuk mendapatkan data paling awal, erase() untuk menghapus data
}