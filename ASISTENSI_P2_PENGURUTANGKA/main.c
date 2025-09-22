#include <stdio.h>

int main() {
    int data[10] = {4, 8, 19, 3, 22, 11, 2, 17, 31, 10};
    int n = 10, i, j, temp;

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    printf("Bilangan setelah diurutkan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
