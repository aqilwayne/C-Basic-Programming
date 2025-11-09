#include <stdio.h>
#include <stdlib.h>

int main() {
    char buff[255];
    FILE *fptr;

    // membuka faile
    if ((fptr = fopen("puisi.txt", "r")) == NULL) {
        printf("Error: File tidak ada!\n");
        exit(1);
    }
    else {
        // baca isi file baris demi baris
        while(fgets(buff, sizeof(buff), fptr)){
            printf("%s", buff);
        }

        // tutup file
        fclose(fptr);
    }

    return 0;
}
