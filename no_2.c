#include <stdio.h>

int main()
{
    // Array nilai
    int nilai[10] = {6, 5, 3, 7, 8, 2, 9, 5, 4, 10};
    int maks = nilai[0], min = nilai[0], tengah;
    int *ptr = nilai;

    // Menemukan nilai maksimum dan minimum
    for (int i = 1; i < 10; i++) {
        if (*(ptr + i) > maks) {
            maks = *(ptr + i);
        }
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    // Menghitung nilai tengah
    tengah = min + ((maks - min) / 2);

    // Mengubah nilai array berdasarkan nilai tengah
    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) <= tengah) {
            *(ptr + i) = min;
        }
        else {
            *(ptr + i) = maks;
        }
    }

    // Cetak hasil array setelah perubahan
    printf("Array setelah diubah:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));  // Akses menggunakan pointer
    }
    printf("\n");

    return 0;
}
