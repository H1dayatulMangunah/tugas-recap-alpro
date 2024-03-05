#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

//pada program ini menggunakan perulangan while
//variable i yang bertipe integer digunakan untuk mengintegrasikan nilai dari 2 hingga 3. dengan setiap iterasi i mencetak pesan "Bilangan untama: " dan diikuti dengan nilai i
//variable j digunakan untuk mengintegrasi nilai dari 1 hingga 2. dengan setiap iterasi dari j mencetak pesan "Bilangan pengali: " dan diikuti nilai j. setelah itu mencetak hasil perkalian i dengan j dengan pesan "Hasil perkalian: "
//perulangan diulang sampai tidak memenuhi lagi.