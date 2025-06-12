#include <stdio.h>
#include <string.h>
int main() {
    char nama[5][50]; 
    strcpy(nama[0], "Fadli");
    strcpy(nama[1], "Ijan");
    strcpy(nama[2], "Pepen");
    strcpy(nama[3], "Rayhan");
    strcpy(nama[4], "Abel");
    printf("Daftar nama:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, nama[i]);
    }

    return 0;
}
