#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

//Program ini mencetak daftar nama dan usia dari beberapa orang yang telah ditentukan sebelumnya dalam array. Setiap nama dan usia dicetak dalam format tabel.