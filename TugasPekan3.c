#include <stdio.h>

int main() {
    int m, n;

    printf("Masukkan total uang (m): ");
    scanf("%d", &m);

    printf("Masukkan jumlah jenis es krim (n): ");
    scanf("%d", &n);

    int harga[n];

    printf("Masukkan %d harga es krim:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Harga es krim ke-%d: ", i + 1);
        scanf("%d", &harga[i]);
    }

    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (harga[i] + harga[j] == m) {
                printf("\nPasangan es krim yang pas: es krim ke-%d dan es krim ke-%d\n", i + 1, j + 1);
                found = 1;
                break; 
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("\nTidak ada pasangan es krim yang pas dengan uang Anda.\n");
    }

    return 0;
}