#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int palpite;
    int numsecreto;
    
    srand(time(NULL));
    numsecreto = rand() % 101; 
    
    printf("Numero aleatorio: %d\n", numsecreto); // Essa linha pode ser removida para o usuario nao saber o numero gerado
    
    printf("Digite um palpite: ");
    scanf("%d", &palpite);
    
    if (palpite == numsecreto) {
        printf("Parabéns! Você acertou!\n");
    } else if (palpite > numsecreto) {
        printf("Muito alto! Tente um número menor.\n");
    } else { // palpite < numsecreto
        printf("Muito baixo! Tente um número maior.\n");
    }
    
    return 0;
}
