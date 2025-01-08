#include <stdio.h>
#include <string.h>

struct bintang {
    int tgl;
    int bln;
    char nama[20];
} bintang[12];

int main()
{
    int tang, bulan;
    char nBintang[20];

    // Inisialisasi bulan dan tanggal bintang
    for(int i = 0; i < 12; i++){
        bintang[i].bln = i + 1;
    }
    bintang[0].tgl = 20;    // Aquarius
    bintang[1].tgl = 19;    // Pisces
    bintang[2].tgl = 21;    // Aries
    bintang[3].tgl = 20;    // Taurus
    bintang[4].tgl = 21;    // Gemini
    bintang[5].tgl = 21;    // Cancer
    bintang[6].tgl = 23;    // Leo
    bintang[7].tgl = 23;    // Virgo
    bintang[8].tgl = 23;    // Libra
    bintang[9].tgl = 23;    // Scorpio
    bintang[10].tgl = 22;   // Sagittarius
    bintang[11].tgl = 22;   // Capricorn

    // Menyimpan nama bintang sesuai urutan
    strcpy(bintang[0].nama, "Aquarius");
    strcpy(bintang[1].nama, "Pisces");
    strcpy(bintang[2].nama, "Aries");
    strcpy(bintang[3].nama, "Taurus");
    strcpy(bintang[4].nama, "Gemini");
    strcpy(bintang[5].nama, "Cancer");
    strcpy(bintang[6].nama, "Leo");
    strcpy(bintang[7].nama, "Virgo");
    strcpy(bintang[8].nama, "Libra");
    strcpy(bintang[9].nama, "Scorpio");
    strcpy(bintang[10].nama, "Sagittarius");
    strcpy(bintang[11].nama, "Capricorn");

    // Input tanggal dan bulan lahir
    printf("Masukkan tanggal lahir [tanggal bulan]: ");
    scanf("%d %d", &tang, &bulan);

    // Menentukan zodiak berdasarkan tanggal dan bulan
    for(int i = 0; i < 12; i++){
        if(bulan == bintang[i].bln){
            if(tang >= bintang[i].tgl){
                strcpy(nBintang, bintang[i].nama);
            }
            else{
                // Menangani kasus jika bulan adalah Januari (1)
                if(bulan == 1){
                    strcpy(nBintang, bintang[11].nama);  // Capricorn untuk Januari
                }
                else{
                    strcpy(nBintang, bintang[i - 1].nama); // Zodiak bulan sebelumnya
                }
            }
            break;  // Menghentikan pencarian setelah ditemukan
        }
    }

    // Menampilkan hasil
    printf("Bintang anda adalah %s\n", nBintang);

    return 0;
}
