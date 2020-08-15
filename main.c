// SEFA ENES ERGİN
#include <stdio.h>
#include <stdlib.h>
int main() {
    //Girilen karakterin harf olup olmadığına karar veren program.
    printf("Lütfen test etmek istediğiniz karakteri giriniz!\n");
    char karakter;
    scanf("%c",&karakter);
    if(65<= karakter && karakter <=90)
        printf("Bir harf girildi!");
    else if(karakter>=97 && karakter<=122)
        printf("Bir harf girildi!");
    else
        printf("Girdiğiniz karakter harf değildir!");
    return 0;
}
