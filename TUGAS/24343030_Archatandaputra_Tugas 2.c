#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int angkaTebakan, tebakan, kesempatan, mainLagi;
    char pilihan;

    // Menginisialisasi generator angka acak
    srand(time(0));

    do {
        // Pilih angka acak antara 1 dan 100
        angkaTebakan = rand() % 100 + 1;
        kesempatan = 5;

        printf("Selamat datang di permainan Tebak Angka!\n");
        printf("Saya telah memilih sebuah angka antara 1 dan 100.\n");
        printf("Anda memiliki 5 kesempatan untuk menebaknya.\n");

        // Mulai permainan dengan struktur kontrol loop
        while (kesempatan > 0) {
            printf("Masukkan tebakan Anda: ");
            scanf("%d", &tebakan);

            // Struktur kontrol if-else untuk mengevaluasi tebakan
            if (tebakan > angkaTebakan) {
                printf("Tebakan Anda terlalu tinggi!\n");
            } else if (tebakan < angkaTebakan) {
                printf("Tebakan Anda terlalu rendah!\n");
            } else {
                printf("Selamat! Anda menebak dengan benar!\n");
                break; // Keluar dari loop jika tebakan benar
            }

            kesempatan--; // Kurangi jumlah kesempatan
            printf("Kesempatan tersisa: %d\n", kesempatan);
        }

        // Evaluasi akhir jika gagal menebak dalam 5 kesempatan
        if (kesempatan == 0) {
            printf("Maaf, Anda kehabisan kesempatan. Angka yang benar adalah %d.\n", angkaTebakan);
        }

        // Opsi untuk bermain lagi menggunakan switch
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &pilihan);

        switch (pilihan) {
            case 'y':
            case 'Y':
                mainLagi = 1;
                break;
            case 'n':
            case 'N':
                mainLagi = 0;
                printf("Terima kasih telah bermain!\n");
                break;
            default:
                printf("Pilihan tidak valid, keluar dari permainan.\n");
                mainLagi = 0;
                break;
        }

    } while (mainLagi);

    return 0;
}