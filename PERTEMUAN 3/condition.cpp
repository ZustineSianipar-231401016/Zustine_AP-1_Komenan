#include <iostream>

using namespace std;

int main() {
    int nilai; // Variabel untuk nilai

    cout << "Masukkan Nilai: ";
    cin >> nilai; // Baca nilai dari input

    // If Statement
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl; // Tampilkan pesan jika nilai kurang dari sama dengan 65
    } 


    // If-Else Statement
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl; // Tampilkan pesan jika nilai kurang dari sama dengan 65
    } else {
        cout << "Anda Lulus" << endl; // Tampilkan pesan jika nilai lebih dari 65
    } 


    // If-Else-If Statement
    if (nilai == 100) {
        cout << "Anda Hebat" << endl; // Tampilkan pesan jika nilai sama dengan 100
    } else if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl; // Tampilkan pesan jika nilai kurang dari sama dengan 65
    } else {
        cout << "Anda Lulus" << endl; // Tampilkan pesan jika nilai lebih dari 65
    } 


    // Nested If Statement
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl; // Tampilkan pesan jika nilai kurang dari sama dengan 65
    } else {
        if (nilai == 100) {
            cout << "Anda Lulus dan Anda Hebat" << endl; // Tampilkan pesan jika nilai sama dengan 100
        } else {
            cout << "Anda Lulus" << endl; // Tampilkan pesan jika nilai lebih dari 65
        }
    } 


    // Switch Case
    switch (nilai) {
        case 1:
            cout << "Senin" << endl; // Tampilkan pesan jika nilai sama dengan 1
            break;
        case 2:
            cout << "Selasa" << endl; // Tampilkan pesan jika nilai sama dengan 2
            break;
        case 3:
            cout << "Rabu" << endl; // Tampilkan pesan jika nilai sama dengan 3
            break;
        case 4:
            cout << "Kamis" << endl; // Tampilkan pesan jika nilai sama dengan 4
            break;
        case 5:
            cout << "Jumat" << endl; // Tampilkan pesan jika nilai sama dengan 5
            break;
        case 6:
            cout << "Sabtu" << endl; // Tampilkan pesan jika nilai sama dengan 6
            break;
        case 7:
            cout << "Minggu" << endl; // Tampilkan pesan jika nilai sama dengan 7
            break;
        default:
            cout << "Inputan TIDAK VALID" << endl; // Tampilkan pesan jika nilai tidak valid
            break; // Opsional
    } 


    // Switch Case For Range
    switch (nilai) {
        case 85 ... 100:
            cout << "A" << endl; // Tampilkan pesan jika nilai dalam range 85-100
            break;
        case 80 ... 84:
            cout << "B+" << endl; // Tampilkan pesan jika nilai dalam range 80-84
            break;
        case 75 ... 79:
            cout << "B" << endl; // Tampilkan pesan jika nilai dalam range 75-79
            break;
        case 70 ... 74:
            cout << "C+" << endl; // Tampilkan pesan jika nilai dalam range 70-74
            break;
        case 65 ... 69:
            cout << "C" << endl; // Tampilkan pesan jika nilai dalam range 65-69
            break;
        case 60 ... 64:
            cout << "D" << endl; // Tampilkan pesan jika nilai dalam range 60-64
            break;
        default:
            cout << "E" << endl; // Tampilkan pesan jika nilai tidak dalam range
            break;
    } 


    // Ternary Operator
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // Tampilkan bilangan genap atau ganjil
    cout << nilai << " adalah bilangan " << checkNum << endl; // Tampilkan hasil
}