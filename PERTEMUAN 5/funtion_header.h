int kali(int a, int b) {
    return a * b; // Kembalikan hasil perkalian dua bilangan
}

float bagi(int a, int b) {
    // return (float) a / (float) b; // Konversi tipe data untuk menghasilkan bilangan pecahan
    return static_cast<float>(a) / static_cast<float>(b);   // Konversi tipe data menggunakan static_cast
}