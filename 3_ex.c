#include <stdio.h>

int main () {
    int prato, sobremesa, bebida, cal = 0;

    printf("Informe o codigo do prato: ");
    scanf("%d", &prato);
    printf("Informe o codigo do sobremesa: ");
    scanf("%d", &sobremesa);
    printf("Informe o codigo da bebida: ");
    scanf("%d", &bebida);
    printf("\n");

    switch (prato) {
        case 1:
            printf("Prato selecionado: Vegetariano \n");
            cal += 180;
            break;
        case 2:
            printf("Prato selecionado: Peixe \n");
            cal += 230;
            break;
        case 3:
            printf("Prato selecionado: Frango \n");
            cal += 250;
            break;
        case 4:
            printf("Prato selecionado: Carne \n");
            cal += 350;
            break;
        default:
            printf("Codigo invalido \n");
    }

    switch (sobremesa) {
        case 1:
            printf("Sobremesa selecionado: Abacaxi \n");
            cal += 75;
            break;
        case 2:
            printf("Sobremesa selecionado: Sorvete Diet \n");
            cal += 110;
            break;
        case 3:
            printf("Sobremesa selecionado: Mouse Diet \n");
            cal += 170;
            break;
        case 4:
            printf("Sobremesa selecionado: Mouse Chocolate \n");
            cal += 200;
            break;
        default:
            printf("Codigo invalido \n");
    }

    switch (bebida) {
        case 1:
            printf("Bebida selecionado: Cha \n");
            cal += 20;
            break;
        case 2:
            printf("Bebida selecionado: Suco de laranja \n");
            cal += 70;
            break;
        case 3:
            printf("Bebida selecionado: Suco de melao \n");
            cal += 100;
            break;
        case 4:
            printf("Bebida selecionado: Refrigerante diet \n");
            cal += 65;
            break;
        default:
            printf("Codigo invalido \n");
    }

    printf("\nTotal de Calorias %d", cal);

    return 0;
}