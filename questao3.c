#include <stdio.h>

int main() {
    int valor;
    int c100, c50, c20, c10, c5, c2;

    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    if (valor < 2 || valor == 3) { 
    printf("Valor nao pode ser pago com as cedulas disponivei.\n");
        return 0;
    }
    c100 = valor / 100;
    valor = valor % 100;

    c50 = valor / 50;
    valor = valor % 50;

    c20 = valor / 20;
    valor = valor % 20;

    c10 = valor / 10;
    valor = valor % 10;

    c5 = valor / 5;
    valor = valor % 5;

    c2 = valor / 2;
    valor = valor % 2;

    printf("Cedulas entregues:\n");
    if (c100 > 0) printf("%d de 100\n", c100);
    if (c50 > 0)  printf("%d de 50\n", c50);
    if (c20 > 0)  printf("%d de 20\n", c20);
    if (c10 > 0)  printf("%d de 10\n", c10);
    if (c5 > 0)   printf("%d de 5\n", c5);
    if (c2 > 0)   printf("%d de 2\n", c2);

    return 0;
}
