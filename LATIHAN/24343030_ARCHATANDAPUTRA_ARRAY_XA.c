#include <stdio.h>

int main() {
    
    int angka[5] = {10, 15, 20, 25, 30};

    printf("Elemen-elemen dalam array angka:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    return 0;
}