#include <stdio.h>
int main(){
    int sayac,sayi,faktoriyel;
    faktoriyel = 1;
    printf("Faktöriyelini almak istediğiniz sayıyı girin.\t");
    scanf("%d",&sayi);
    for(sayac=1;sayac<=sayi;sayac++){
        faktoriyel = faktoriyel * sayac;
    }
    printf("Girdiginiz sayinin faktoriyeli:""%d", faktoriyel);
}


