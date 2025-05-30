// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

//=========================== Cavalo =============================//

void moverCavalo(int casas){
    if  (casas > 1){
        printf("Cima\n");
        moverCavalo(casas - 1);

    } else if (casas > 0){
        printf("Direita\n");
        moverCavalo(casas - 1);
    }
}

int main() {
    moverCavalo(3);
    return 0;
}

//============================ Bispo ==============================//

// void moverBispo(int casas){
//     if  (casas > 0){
//         printf("Direita - Cima\n");
//         moverBispo(casas - 1);
//     }
// }

// int main() {
//     moverBispo(5);
//     return 0;
// }

//============================ Rainha ==============================//

// void moverRainha(int casas){
//     if  (casas > 0){
//         printf("Esquerda\n");
//         moverRainha(casas - 1);
//     }
// }
// int main() {
//     moverRainha(8);

//============================= Torre ===============================//

// void moverTorre(int casas){
//     if  (casas > 0){
//         printf("Direita\n");
//         moverTorre(casas - 1);
//     }
// }

// int main() {
//     moverTorre(5);
//     return 0;
// }


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
