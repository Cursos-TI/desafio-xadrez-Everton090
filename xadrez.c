
#include <stdio.h>

int main(){

// Variáveis e os número de movimentos.
    int torre = 5; 
    int bispo = 5;
    int rainha = 6;   // 
    

    int i; 
    int j = 1;

    printf("#### MOVIMENTOS DAS PEÇAS DE XADREZ ####\n");


    printf("Movimento da Torre: A3 \n"); // "A3" é as co tabuleirooordenas d de xadrez, ou posição atual antes do movimento.
    for (i = 1; i <= torre; i++)
    {
        printf("direita\n");
    }

    printf("Movimento do bispo: C1 \n"); // "C1" Posição atual, antes do movimento.
    i = 1;
    while (i <= bispo)
    {
        printf("Cima,Direita\n");
        i++;
    }

    printf("Movimento da Rainha: G3\n"); // "G3" Posição atual, antes do movimento.
    i = 1; 
    do {
        printf("Esquerda\n");
        i++;
    }  while (i <= rainha);

    printf("Movimento do cavalo: B4\n");// "B4" Posição atual, antes do movimento.
    i = 1; 

    for(int i = 1; i <= 2; i++)
    {
        printf("Baixo\n");          
    } 
    
    while (j <= 1)
    {
        printf("Esquerda");
        j++;
    }
    
    // Não sei ao certo como fazer uma comentario explicando tudo.

  

        return 0;
   
}
