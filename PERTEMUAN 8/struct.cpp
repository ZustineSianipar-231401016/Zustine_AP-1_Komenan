#include <iostream>
#include <vector>

using namespace std;

//? Deklarasi Struktur
struct Mahasiswa {
    string nama, nim; // Variabel nama dan nim dengan tipe data string
    float nilai; // Variabel nilai dengan tipe data float
};

typedef struct {
    string nama, nim; // Variabel nama dan nim dengan tipe data string
    float nilai; // Variabel nilai dengan tipe data float
} mhs; // Deklarasi alias untuk struktur mhs

int main() {
    system("cls"); // Bersihkan layar

    //? Inisialisasi Struktur
    Mahasiswa mhs; // Deklarasi variabel mhs dengan tipe data struktur Mahasiswa
    vector<Mahasiswa> mahasiswa; // Deklarasi vektor untuk menampung data mahasiswa
    int n; // Variabel untuk jumlah mahasiswa

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n; // Input jumlah mahasiswa

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl; // Menampilkan label mahasiswa

        cin.get(); // Mengabaikan enter yang diberikan
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama); // Input nama

        cout << "Masukkan NIM : ";
        cin >> mhs.nim; // Input NIM

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai; // Input nilai

        mahasiswa.push_back(mhs); // Menambahkan struktur mhs ke vektor
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl; // Menampilkan label mahasiswa
        cout << "Nama : " << mahasiswa[i].nama << endl; // Menampilkan nama
        cout << "NIM : " << mahasiswa[i].nim << endl; // Menampilkan NIM
        cout << "Nilai : " << mahasiswa[i].nilai << endl; // Menampilkan nilai
    }

    return 0;
}