#include <stdio.h>

int main() {
    // Deklarasi dan inisialisasi array dengan nilai awal
    int angka[5] = {10, 20, 30, 40, 50};
    int indeks, nilaiBaru;

    // Menampilkan array awal
    printf("Array awal:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    // Meminta pengguna memasukkan nomor elemen (indeks) yang ingin diganti
    printf("\nMasukkan indeks elemen yang ingin diganti (0-4): ");
    scanf("%d", &indeks);

    // Validasi indeks yang dimasukkan
    if (indeks < 0 || indeks >= 5) {
        printf("Indeks tidak valid!\n");
        return 1;
    }

    // Meminta nilai baru dari pengguna
    printf("Masukkan nilai baru: ");
    scanf("%d", &nilaiBaru);

    // Mengganti nilai elemen pada indeks yang diberikan
    angka[indeks] = nilaiBaru;

    // Menampilkan array setelah elemen diganti
    printf("\nArray setelah elemen diganti:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    return 0;
}