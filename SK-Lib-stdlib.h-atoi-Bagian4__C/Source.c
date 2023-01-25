#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    printf("%i\n", atoi(" -123junk"));
    printf("%i\n", atoi(" +321dust"));
    printf("%i\n", atoi("0"));
    printf("%i\n", atoi("0042")); // diperlakukan sebagai angka desimal dengan nol di depan
    printf("%i\n", atoi("0x2A")); // hanya nol di depan yang dikonversi dengan membuang "x2A"
    printf("%i\n", atoi("junk")); // tidak ada konversi yang dapat dilakukan
    printf("%i\n", atoi("2147483648")); // UB: di luar jangkauan int

    _getch();
    return 0;
}