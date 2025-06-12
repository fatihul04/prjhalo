#include <stdio.h>
#include <string.h>

int main() {
    int jumlah;
    
    printf("Masukkan jumlah nama: ");
    scanf("%d", &jumlah);

    char nama[jumlah][100];

    for (int i = 0; i < jumlah; i++) {
        printf("Masukkan nama ke-%d: ", i + 1);
        scanf(" %[^\n]s", nama[i]);
    }
    
    printf("\nDaftar Nama:\n");
    for (int i = 0; i < jumlah; i++) {
        printf("%d. %s\n", i + 1, nama[i]);
    }

    return 0;
}
