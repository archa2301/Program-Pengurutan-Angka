#include <stdio.h>
#include <string.h>

// Deklarasi fungsi hitungPanjangString
int hitungPanjangString(char str[]) {
    return strlen(str);
}

int main() {
    char input[100];  // Array untuk menyimpan input dari pengguna

    // Meminta input dari pengguna
    printf("Masukkan sebuah string: ");
    scanf("%99s", input);

    // Menghitung panjang string dan menampilkannya
    int panjang = hitungPanjangString(input);
    printf("Panjang string yang dimasukkan: %d\n", panjang);

    return 0;
}