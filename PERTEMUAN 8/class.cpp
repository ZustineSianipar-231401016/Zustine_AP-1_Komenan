#include <iostream>
#include <vector>

using namespace std;

//? Kelas Mahasiswa
class Mahasiswa {
    //? Akses Modifier
    private:
        string nama, nim; // Variabel nama dan nim dengan akses private
        float nilai; // Variabel nilai dengan akses private

    //? Akses Modifier
    public:
        //? Konstruktor -> Fungsi yang langsung dipanggil ketika class diinstansiasi
        Mahasiswa(string nama, string nim, float nilai) {
            this->nama = nama; // Menginisialisasi variabel nama dengan nilai yang diberikan
            this->nim = nim; // Menginisialisasi variabel nim dengan nilai yang diberikan
            this->nilai = nilai; // Menginisialisasi variabel nilai dengan nilai yang diberikan
        }

        //? Getter Function -> Berfungsi untuk mengembalikan data sebuah variabel yang memiliki akses private
        string getName() {
            return this->nama; // Mengembalikan nilai variabel nama
        }

        void display() {
            cout << "Nama   : " << this->nama << endl; // Menampilkan nama
            cout << "NIM    : " << this->nim << endl; // Menampilkan NIM
            cout << "Nilai  : " << this->nilai << endl; // Menampilkan nilai
        }
};

int main() {
    system("cls"); // Bersihkan layar

    //? Instansiasi Kelas Mahasiswa
    Mahasiswa siswa1("Andi", "231401111", 45.6); // Instansiasi objek siswa1 dengan nama "Andi", NIM "231401111", dan nilai 45.6
    siswa1.display(); // Menampilkan informasi siswa1

    //? Error
    cout << siswa1.nama << endl; // Mengakses variabel nama secara langsung (error)
    siswa1.nama = "Budi"; // Mengubah nilai variabel nama (error)
    cout << siswa1.nama << endl; // Mengakses variabel nama secara langsung (error)

    cout << siswa1.getName() << endl; // Mengakses variabel nama menggunakan getter function

    //? Vektor untuk Menampung Data Mahasiswa
    vector<Mahasiswa> mahasiswa; // Deklarasi vektor untuk menampung data mahasiswa
    int n; // Variabel untuk jumlah mahasiswa
    string nama, nim; // Variabel untuk nama dan NIM
    float nilai; // Variabel untuk nilai

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n; // Input jumlah mahasiswa

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl; // Menampilkan label mahasiswa

        cin.get(); // Mengabaikan enter yang diberikan
        cout << "Masukkan nama : ";
        getline(cin, nama); // Input nama

        cout << "Masukkan NIM : ";
        cin >> nim; // Input NIM

        cout << "Masukkan nilai : ";
        cin >> nilai; // Input nilai

        Mahasiswa mhs(nama, nim, nilai); // Instansiasi objek mahasiswa dengan nama, NIM, dan nilai
        mahasiswa.push_back(mhs); // Menambahkan objek mahasiswa ke vektor
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl; // Menampilkan label mahasiswa
        mahasiswa[i].display(); // Menampilkan informasi mahasiswa
    }

    return 0;
}