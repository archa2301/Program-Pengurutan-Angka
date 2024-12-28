#include <stdio.h>
#include <string.h>

// Deklarasi fungsi gabungkanString
void gabungkanString(char hasil[], char str1[], char str2[]) {
    strcpy(hasil, str1);      // Salin str1 ke hasil
    strcat(hasil, str2);      // Gabungkan str2 ke hasil
}

int main() {
    char str1[100], str2[100];      // Array untuk menyimpan input dari pengguna
    char hasil[200];                // Array untuk menyimpan hasil penggabungan

    // Meminta input dari pengguna
    printf("Masukkan string pertama: ");
    scanf("%99s", str1);
    printf("Masukkan string kedua: ");
    scanf("%99s", str2);

    // Menggabungkan kedua string
    gabungkanString(hasil, str1, str2);

    // Menampilkan hasil penggabungan
    printf("Hasil penggabungan: %s\n", hasil);

    return 0;
}