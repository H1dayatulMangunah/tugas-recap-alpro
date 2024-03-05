#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

//pada program ini menggunakan perulangan do while 
//variable i yang bertipe integer digunakan untuk mengintegrasikan nilai dari 2 hingga 3. dengan setiap iterasi i mencetak pesan "Bilangan untama: " dan diikuti dengan nilai i
//variable j digunakan untuk mengintegrasi nilai dari 1 hingga 2. dengan setiap iterasi dari j mencetak pesan "Bilangan pengali: " dan diikuti nilai j. setelah itu mencetak hasil perkalian i dengan j dengan pesan "Hasil perkalian: "
//perulangan diulang sampai tidak memenuhi lagi.

//jadi tuh intinya kalo yang while itu akan melakukan perulangan kalau kondisinya terpenuhi sedangkan yang do while itu melakukan perulangan dulu, setelah itu memeriksa kondisinya.