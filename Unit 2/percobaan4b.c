#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//jadi program ini tuh merupakan sebuah program yang menggunakan perulangan for
//program ini merupakan program untuk menentukan hasil perkalian
//variable i digunakan untuk mengintegrasi nilai dari 2 hingga 3. dengan setiap iterasi dari i mencetak pesan "Bilangan utama: " dan diikuti i
//variable j digunakan untuk mengintegrasi nilai dari 1 hingga 2. dengan setiap iterasi dari j mencetak pesan "Bilangan pengali: " dan diikuti j. setelah itu mencetak hasil perkalian i dengan j dengan pesan "Hasil perkalian: "
//perulangan diulang sampai tidak memenuhi lagi.