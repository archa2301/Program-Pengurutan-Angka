#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Untuk menghitung waktu eksekusi

#define GROUP_SIZE 10 // Ukuran grup per baris

// Fungsi untuk melakukan Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar nilai
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk membaca angka dari file dengan alokasi dinamis
int *readFromFile(const char *filename, int *size) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Gagal membuka file: %s\n", filename);
        return NULL;
    }

    int capacity = 10; // Ukuran awal untuk alokasi
    int *arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Gagal mengalokasikan memori.\n");
        fclose(file);
        return NULL;
    }

    *size = 0; // Jumlah elemen
    while (fscanf(file, "%d", &arr[*size]) != EOF) {
        (*size)++;
        if (*size >= capacity) {
            // Jika kapasitas penuh, perbesar ukuran memori
            capacity *= 2;
            arr = (int *)realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Gagal mengalokasikan memori.\n");
                fclose(file);
                return NULL;
            }
        }
    }

    fclose(file);
    return arr;
}

// Fungsi untuk menulis hasil pengurutan ke file
void writeToFile(const char *filename, int arr[], int n) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Gagal membuka file untuk menulis: %s\n", filename);
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%d ", arr[i]);
        if ((i + 1) % GROUP_SIZE == 0) {
            fprintf(file, "\n"); // Baris baru setiap 10 angka
        }
    }

    fclose(file);
}

int main() {
    const char *inputFilename = "input_6.txt";  // Nama file input
    const char *outputFilename = "output_6.txt"; // Nama file output
    int *arr;                                         // Pointer untuk array angka
    int n;                                            // Jumlah angka yang dibaca

    // Variabel untuk menghitung waktu eksekusi
    clock_t start, end;
    double cpu_time_used;

    // Membaca data dari file
    arr = readFromFile(inputFilename, &n);
    if (arr == NULL) {
        return 1; // Keluar jika gagal membuka file
    }

    // Menampilkan angka sebelum diurutkan
    printf("Angka sebelum diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if ((i + 1) % GROUP_SIZE == 0) {
            printf("\n");
        }
    }
    printf("\n");

    // Menghitung waktu eksekusi sorting
    start = clock();
    for (int i = 0; i < n; i += GROUP_SIZE) {
        int groupEnd = (i + GROUP_SIZE > n) ? n : i + GROUP_SIZE;
        bubbleSort(arr + i, groupEnd - i);
    }
    end = clock();

    // Menghitung waktu yang digunakan
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Menampilkan angka setelah diurutkan
    printf("Angka setelah diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if ((i + 1) % GROUP_SIZE == 0) {
            printf("\n");
        }
    }
    printf("\n");

    // Menampilkan waktu eksekusi
    printf("Waktu eksekusi pengurutan: %.6f detik\n", cpu_time_used);

    // Menyimpan hasil pengurutan ke dalam file output
    writeToFile(outputFilename, arr, n);

    printf("Hasil pengurutan telah disimpan ke file '%s'.\n", outputFilename);

    // Bebaskan memori yang dialokasikan
    free(arr);

    return 0;
}