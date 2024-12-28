#include <stdio.h>
#include <string.h>

// Deklarasi fungsi bandingkanString
int bandingkanString(char str1[], char str2[]) {
    return strcmp(str1, str2);  // Menggunakan strcmp untuk membandingkan str1 dan str2
}

int main() {
    char str1[100], str2[100];  // Array untuk menyimpan input dari pengguna

    // Meminta input dari pengguna
    printf("Masukkan string pertama: ");
    scanf("%99s", str1);
    printf("Masukkan string kedua: ");
    scanf("%99s", str2);

    // Membandingkan kedua string
    int hasil = bandingkanString(str1, str2);

    // Menampilkan hasil perbandingan
    if (hasil == 0) {
        printf("Hasil perbandingan: 0 (String sama)\n");
    } else {
        printf("Hasil perbandingan: %d (String tidak sama)\n", hasil);
    }

    return 0;
}