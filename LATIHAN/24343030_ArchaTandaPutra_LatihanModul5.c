#include <stdio.h>
#include <string.h>

int main() {

    printf("Nama    : Archa Tannda Putra\n");
    printf("NIM     : 24343030\n\n");

    int jumlahPerulangan; // Variabel untuk menyimpan jumlah pengulangan
    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &jumlahPerulangan); // Membaca jumlah pengulangan
        
    printf("\nSistem informasi data mahasiswa!\n");

    for (int i = 0; i < jumlahPerulangan; i++) {
        char nama[100];
        char nim[20];
        char prodi[50];
        char universitas[50];
        char alamat[100];

        
        printf("\n\nMasukkan nama: ");
        scanf(" %[^\n]", nama); // Memastikan input string sampai enter

        printf("Masukkan NIM: ");
        scanf(" %[^\n]", nim);

        printf("Masukkan program studi: ");
        scanf(" %[^\n]", prodi);

        printf("Masukkan universitas: ");
        scanf(" %[^\n]", universitas);

        printf("Masukkan alamat: ");
        scanf(" %[^\n]", alamat);

        // Output informasi data mahasiswa yang dimasukkan
        printf("\n\nInformasi data mahasiswa yang dimasukkan:\n");
        printf("Nama: %s\n", nama);
        printf("NIM: %s\n", nim);
        printf("Program Studi: %s\n", prodi);
        printf("Universitas: %s\n", universitas);
        printf("Alamat: %s\n", alamat);
    }
    
        puts("Terima kasih atas informasi yang Anda berikan!\n\n");

    return 0;
}