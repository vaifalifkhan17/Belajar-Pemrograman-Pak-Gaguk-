#include <stdio.h>
#include <stdlib.h>


int main()
{
   char nama[50], email[50], nim[50], alamat[50], prodi[50], kelas [50], nilai [1000];

    printf("\t\tProgram Input Data & Nilai\n");
    printf("\tMahasiswa Universitas Hayam Wuruk Perbanas Surabaya\n");
    printf("\n====================================================================\n");
    printf("Masukkan Nama Anda  : ");
        fgets (nama, sizeof(nama), stdin);

    printf("Masukkan Email Anda : ");
        fgets (email, sizeof(email), stdin);

    printf("Masukkan NIM Anda   : ");
        fgets (nim, sizeof(nim), stdin);

    printf("Masukkan Alamat Anda: ");
        fgets (alamat, sizeof(alamat), stdin);

    printf("Program Studi       : ");
        fgets (prodi, sizeof(prodi), stdin);

    printf("Kelas               : ");
        fgets (kelas, sizeof(kelas), stdin);

    printf("Masukkan Nilai Anda : ");
        fgets (nilai, sizeof(nilai), stdin);


    printf("\n===================================================================\n");
    printf("Nama Anda           : %s",nama);
    printf("Alamat email        : %s",email);
    printf("Nomor NIM Anda      : %s",nim);
    printf("Alamat              : %s",alamat);
    printf("Program Studi       : %s",prodi);
    printf("Kelas               : %s",kelas);
    printf("Nilai Anda          : %s",nilai);

    if (nilai >70){
    printf("Nilai Anda          : Sangat Baik\n");
    printf("Pertahankan nilai Anda\n");

    }
    else if (nilai <70){
    printf("Nilai Anda          : Cukup\n");
    printf("Perbaiki nilai Anda\n");

    printf("Selamat Datang di Universitas Hayam Wuruk");
    }

    return 0;
}
