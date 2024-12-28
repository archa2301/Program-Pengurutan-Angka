#include <stdio.h>

int main() {
    float nilai_Tugas, nilai_uts, nilai_uas, nilai_akhir; // deklarasi variabel

    printf("Nama: Archa Tanda Putra\n");
    printf("NIM :24343030\n");
    printf("Tanggal: 4-10-2024\n");

    // Input nilai
    printf("Masukkan nilai tugas: "); //input nilai tugas
    scanf("%f", &nilai_Tugas);
    printf("Masukkan nilai UTS: "); //input nilai UTS
    scanf("%f", &nilai_uts);
    printf("Masukkan nilai UAS: "); //input nilai UAS
    scanf("%f", &nilai_uas);

    // Menghitung nilai akhir
    nilai_akhir = (0.3 * nilai_Tugas) + (0.3 * nilai_uts) + (0.4 * nilai_uas);

    // Menampilkan hasil
    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    // Menentukan kelulusan
    if (nilai_akhir >= 60 && nilai_uas >= 50) {
        printf("Status Kelulusan: Lulus\n");
    } else {
        printf("Status Kelulusan: Tidak Lulus\n");
    }

    return 0;
}