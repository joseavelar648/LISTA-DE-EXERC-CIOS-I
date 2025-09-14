#include <stdio.h>

int main (){
    float PESO, ALTURA, imc;
    printf("digite seu peso e altura:");
    scanf("%f %f", &PESO, &ALTURA);
    
    imc = PESO/(ALTURA * ALTURA);
    printf("seu IMC = %.2f\n", imc);
    
   if (imc < 18.5) {
        printf("Categoria: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Categoria: Peso normal\n");
    } else if (imc < 30) {
        printf("Categoria: Sobrepeso\n");
    } else if (imc < 35) {
        printf("Categoria: Obesidade grau I\n");
    } else if (imc < 40) {
        printf("Categoria: Obesidade grau II\n");
    } else {
        printf("Categoria: Obesidade grau III\n");
    }

    return 0;
}
