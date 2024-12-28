#include <stdio.h>

// Fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari) {
    return 2 * 3.14 * jariJari;
}

int main() {
    float jariJari;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);
    
    // Memanggil fungsi dan menampilkan hasil
    float keliling = hitungKelilingLingkaran(jariJari);
    printf("Keliling lingkaran adalah: %.2f\n", keliling);
    
    return 0;
}