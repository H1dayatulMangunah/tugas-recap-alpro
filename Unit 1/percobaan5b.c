#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

//perbedaannya tuh ada yah
//kalo yang pertama tuh outputya sudah ditentukan sebelumnya, kalo yang kedua itu outputnya tergantung sama input si penggunanya
//yang program pertama itu juga mencetak nama dan usia sesuai sama data sebelumnya jadi penggunanya tidak dimintai input lagi. kalo untuk yang kedua itu harus memasukan inputan misalnya tuh nama lengkapnya.