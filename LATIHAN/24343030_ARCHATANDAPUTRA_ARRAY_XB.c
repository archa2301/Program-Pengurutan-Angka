#include <stdio.h>

int main() {
    // Deklarasi dan inisialisasi array dengan 5 nilai
    int angka[5] = {10, 15, 20, 25, 30};
    int jumlah = 0;  // Variabel untuk menyimpan hasil penjumlahan

    for (int i = 0; i < 5; i++) {
        jumlah += angka[i];
    }

    
    printf("Jumlah semua elemen array: %d\n", jumlah);

    return 0;
}