#include <stdio.h>

//============================= Exemplo 4 ===============================//

int main() 
{
    int numero, i;

    printf("Digite um numero para calcular a tabuada...");
    printf("\n");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, numero, i * numero);
    }

    printf("\n");

return 0;
}

//============================= Exemplo 3 ===============================//

// int main() 
// {
// int numero;

// do {

//     printf("Digite um numero par para sair do programa...\n");
//     scanf("%d", &numero);

//         if (numero % 2 == 0){
//             printf("\n");
//             printf("%d é par", numero);
//         } else {
//             printf("\n");
//             printf("%d é impar", numero);
//         }

// } while (numero % 2 != 0);

//         printf("\n");
//         printf("Você digitou um numero par, saindo do programa...\n");
//         printf("\n");

// return 0;
// }

//============================= Exemplo 2 ===============================//

// int main() 
// {
// int i = 0;

// while (i <= 20)
// {
//         if (i % 2 != 0)
//         {

//         printf("O numero %d é impar \n", i);
//         }
// i++;
// }
    
// return 0;
// }

//============================= Exemplo 1 ===============================//

// int main() 
// {
// int i = 0;

// while (i <= 20)
// {
//         if (i % 2 != 0){

//         printf("O numero %d é impar \n", i);

//     }
// i++;

// }
    
// return 0;
// }