#include <stdio.h> 


#define MAX_PERSONS 3 
#define MAX_NAME_LENGTH 20

int main() {//deklarasi dari fungsi program c
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

//pada program ini mendefinisikan 2 konstanta yaitu 'MAX_PERSONS' dan 'MAX_NAME_LENGTH'.
//2 konstanta itu digunakan untuk menentukan ukuran maksimum array nama dan panjang karakter maksimum.
//mendefinisikan array 'names' yang berisi nama-nama orang, dengan tipe data dari array itu adalah char dan array 'ages' yang berisi usia dari masing-masing orang dengan tipe data integer.
//mencetak tabel dengan pakai printf.
//melakukan iterasi menggunakan perulangan 'for'. setiap iterasi mencetak nama dan usia orang sesuai dengan indeks yang sedang diiterasikan