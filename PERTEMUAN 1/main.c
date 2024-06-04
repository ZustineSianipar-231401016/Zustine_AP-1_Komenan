#include <stdio.h>
#include <conio.h>  // header conio.h untuk fungsi getch()

int main() {
    // Deklarasi variabel
    char nama[50]; // Array simpan nama (string)
    int nim;       // Variabel simpan NIM (integer)
    char kom;      // Variabel simpan (karakter)
    float ip;      // Variabel simpan (float)

    // Tampilkan pesan ke layar
    printf("Hello World\n");

    // Meminta pengguna masukkan nama
    printf("Masukkan nama : ");
    // gets() untuk membaca input string. 
    gets(nama);    

    // Meminta pengguna masukkan NIM
    printf("Masukkan NIM : ");
    // scanf() untuk membaca input integer
    scanf("%d", &nim);

    // Meminta pengguna masukkan KOM
    printf("Masukkan KOM : ");
    // scanf() untuk membaca input karakter tunggal. Spasi sebelum %c untuk memberi jarak
    scanf(" %c", &kom);

    // Meminta pengguna masukkan IP
    printf("Masukkan IP : ");
    // scanf() untuk membaca input float
    scanf("%f", &ip);

    // Menampilkan nama dgn puts() otomatis menambahkan newline di akhir
    printf("Nama : ");
    puts(nama);

    // Tampilkan NIM
    printf("NIM : %d\n", nim);
    // Tampilkan KOM
    printf("KOM : %c\n", kom);
    // Tampilkan IP 3 angka di belakang koma
    printf("IP : %.3f\n", ip);

    // Meminta pengguna menekan tombol apapun untuk lanjut. Program berhenti sampai tombol ditekan
    printf("Press any button to continue...");
    getch(); // Menunggu tombol ditekan
}
