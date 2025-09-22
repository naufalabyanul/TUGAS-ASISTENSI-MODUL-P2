#include <stdio.h>

int main() {
    int a, b;
    printf("Masukkan dua angka (pisahkan dengan spasi): ");
    scanf("%d %d", &a, &b);

    printf("\nHasil Operasi:\n");
    printf("Penjumlahan  : %d + %d = %d\n", a, b, a + b);
    printf("Pengurangan  : %d - %d = %d\n", a, b, a - b);
    printf("Perkalian    : %d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("Pembagian    : %d / %d = %.2f\n", a, b, (float)a / b);
        printf("Modulo       : %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Pembagian    : Tidak dapat dibagi dengan nol!\n");
        printf("Modulo       : Tidak dapat dihitung karena pembagi nol!\n");
    }

    return 0;
}
