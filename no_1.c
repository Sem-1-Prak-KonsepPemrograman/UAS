#include <stdio.h>

int main()
{
    // Matriks nilai mahasiswa untuk 4 mahasiswa dan 3 mata kuliah
    int mhs[4][3] = {
        {85, 75, 75},
        {90, 60, 80},
        {95, 80, 85},
        {60, 75, 90}
    };

    // Array untuk menyimpan rata-rata mahasiswa dan rata-rata mata kuliah
    float rataRata_Mhs[4] = {0, 0, 0, 0}, rataRata_Matkul[3] = {0, 0, 0};

    // Array untuk menyimpan nama mahasiswa
    char nama[5][100] = {
        {"Ahmad"},
        {"Adang"},
        {"Desi"},
        {"Feni"},
        {"Rata-rata"} // Nama untuk rata-rata
    };

    // Menghitung rata-rata setiap mahasiswa
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            rataRata_Mhs[i] += mhs[i][j];
        }
        rataRata_Mhs[i] /= 3; // Membagi jumlah nilai dengan jumlah mata kuliah
    }

    // Menghitung rata-rata setiap mata kuliah
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            rataRata_Matkul[i] += mhs[j][i];
        }
        rataRata_Matkul[i] /= 4; // Membagi jumlah nilai dengan jumlah mahasiswa
    }

    // Menampilkan header
    printf("No.\tNama\t\tMatematika\tPemrograman\tLogika Algoritma\tRata-rata\n");

    // Menampilkan data mahasiswa dan nilai mereka
    for (int i = 0; i < 4; i++) {
        printf("%d\t%-10s\t\t", i + 1, nama[i]); // Menyusun nama agar rapi
        for (int j = 0; j < 3; j++) {
            printf("%-16d", mhs[i][j]); // Menampilkan nilai setiap mata kuliah
        }
        printf("%.2f\n", rataRata_Mhs[i]); // Menampilkan rata-rata mahasiswa
    }

    // Menampilkan rata-rata setiap mata kuliah
    printf("\tRata-rata");
    for (int i = 0; i < 3; i++) {
        printf("\t\t%.2f", rataRata_Matkul[i]); // Menampilkan rata-rata setiap mata kuliah
    }

    return 0;
}
