#include <iostream>

using namespace std;

int main() {
    float luas, p, l; // Variabel untuk luas, panjang, dan lebar

    //? const float PHI = 3.14; // Variabel untuk nilai pi, tidak digunakan dalam kode ini

    cout << "Masukkan panjang : "; // Tampilkan pesan untuk meminta panjang
    cin >> p; // Baca panjang dari input

    cout << "Masukkan lebar : "; // Tampilkan pesan untuk meminta lebar
    cin >> l; // Baca lebar dari input

    luas = p * l; // Hitung luas dengan mengalikan panjang dan lebar

    cout << "Luas = " << luas << endl; // Tampilkan hasil luas

    return 0;
}