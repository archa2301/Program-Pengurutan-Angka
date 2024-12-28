#include <stdio.h>
#include <string.h>

// Definisi tipe struct secara global
struct tanggal {
    int hari, bulan, tahun;
};

struct mahasiswa {
    char nama[30];
    int nim;
    struct tanggal tanggal_lahir;
};

// Deklarasi variabel data_mahasiswa secara global
struct mahasiswa data_mahasiswa;

int main() {
    // Mengisi data ke dalam variabel struct data_mahasiswa
    strcpy(data_mahasiswa.nama, "Archa Tanda Putra");
    data_mahasiswa.nim = 24343030;
    data_mahasiswa.tanggal_lahir.hari = 23;
    data_mahasiswa.tanggal_lahir.bulan = 1;
    data_mahasiswa.tanggal_lahir.tahun = 2006;

    // Menampilkan data dalam struct data_mahasiswa
    printf("Nama Mahasiswa: %s\n", data_mahasiswa.nama);
    printf("Nomor Induk Mahasiswa: %d\n", data_mahasiswa.nim);
    printf("Tanggal Lahir: %02d-%02d-%d\n", 
           data_mahasiswa.tanggal_lahir.hari,
           data_mahasiswa.tanggal_lahir.bulan,
           data_mahasiswa.tanggal_lahir.tahun);

    return 0;
}