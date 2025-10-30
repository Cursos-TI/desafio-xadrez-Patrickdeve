#include <stdio.h>

int main() {

    // Declaração de variáveis
  
    int i;
    int j = 1;
    int casasTorre = 5;   
    int casasBispo = 5;   
    int casasRainha = 8;  
    int CavaloBaixo = 2;
    int Cavaloesquerda = 1;

    // Movimento do CAVALO - loop aninhado
    
    printf("=== Movimento do Cavalo ===\n");

    for (int i = 1; i <= Cavaloesquerda; i++)
    {
       while (j <= CavaloBaixo)
       {
        printf("Baixo \n");
        j++;
       }
       printf("Esquerda \n");
    }
    
   
    // Movimento da TORRE - For
    
    printf("\n=== Movimento da Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n", i);
    }
    printf("\n");

   
    // Movimento do BISPO - While
 
    printf("=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n", i);
        i++;
    }
    printf("\n");

 
    // Movimento da RAINHA — DO-WHILE
    
    printf("=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda\n", i);
        i++;
    } while (i <= casasRainha);
    printf("\n");


    printf("Simulação de movimentos concluída.\n");

    return 0;
}
