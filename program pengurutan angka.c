#include <stdio.h>

int main (){
    int n, i, j, k;

//meminta jumlah elemen 
    printf("masukkan jumlah bilangan yang akan diurutkan : ");
    scanf("%d", &n);

    int arr[n];

    //memasukkan elemen array
    printf("memasukkan %d angka :\n", n);
    for(i = 0; 1 < n; i++){
        if(i == n){
            break;
        }
        printf("angka ke %d : ", i + 1);
        scanf("%d", &arr[i]);

    }

    //proses buble sort
    for(i = 1; i < n - 1; i++) {
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                //menukar elemen
                k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
            }
        }
    }

    // menampilkan array yang sudah diurutkan
    printf("angka setelah dirutkan : \n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    printf("\n");
        return 0;
}