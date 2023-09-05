#include <stdio.h>

int main () {
    int codigo, quantidade;

    printf("Informe o codigo do pedido: ");
    scanf("%d", &codigo);
    printf("Informe a quantidade do pedido: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            printf("Prato selecionado: Cachorro quente \n");
            printf("Total a pagar: %.2f", quantidade * 10.10f);
            break;
        case 101:
            printf("Prato selecionado: Bauru simples \n");
            printf("Total a pagar: %.2f", quantidade * 8.30f);
            break;
        case 102:
            printf("Prato selecionado: Bauru c/ovo \n");
            printf("Total a pagar: %.2f", quantidade * 8.50f);
            break;
        case 103:
            printf("Prato selecionado: Hamburger \n");
            printf("Total a pagar: %.2f", quantidade * 12.50f);
            break;
        case 104:
            printf("Prato selecionado: Cheeseburger \n");
            printf("Total a pagar: %.2f", quantidade * 13.25f);
            break;
        default:
            printf("Codigo invalido");
    }

    return 0;
}