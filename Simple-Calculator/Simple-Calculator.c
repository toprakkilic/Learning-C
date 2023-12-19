#include <stdio.h>
#include <stdlib.h>
float main(){
    float num1, num2;
    char islem;
    printf("Enter the first num: \n");
    scanf("%f", &num1);
    printf("Enter the second number: \n");
    scanf("%f", &num2);
    printf("Enter the symbol of operation : \n");
    scanf("%s", &islem);
    switch (islem){
        case '/': printf("%.2f", num1/num2); break;
        case 'x': printf("%.2f", num1*num2); break;
        case '+': printf("%.2f", num1+num2); break;
        case '-': printf("%.2f", num1-num2); break;
        default: printf("Try again.");
    }

}