#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    printf("Nama    : Archa Tanda Putra\n");
    printf("NIM     : 24343030\n\n");

    int bilangan, sisaBagi;

    //input
    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukkan bilangan bulat : ");
    scanf("%d", &bilangan);

    //proses menentukan sisa bagi
    sisaBagi = bilangan % 2;

    //proses menentukan bilangann ganjil atau genap
    if ( sisaBagi == 1) printf("Bilangan %d adalah bilangan Ganjil", bilangan);
    else printf("Bilangan %d adalah bilangan Genap", bilangan);
    
    return 0;
}