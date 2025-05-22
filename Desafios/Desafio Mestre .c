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
