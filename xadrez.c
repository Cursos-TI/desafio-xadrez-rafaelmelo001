#include <stdio.h>


    //JOGO DE XADREZ
    //Peças: Torre- frente e lado, 5 casas pra frente; Bispo- Diagonal, ira mover 5 casas, Rainha - todas direções, 8  casas pra esq;>
    // cavalo - 2 casas pra cima e 2 para direita;

    /*Seleção de peças*/

    /*FUNÇÃO*/
    void movimento_torre (int torre);
    void movimento_bispo(int bispo);
    void movimento_rainha(int rainha);

    void movimento_torre (int torre)
    {
        if(torre > 0)
        {
        
            printf(" Direita\n");
            movimento_torre(torre - 1); // Chamada recursiva para mover a torre
        }
    }

    void movimento_bispo(int bispo)
    {
        if(bispo > 0)
        {
            printf(" Direita cima\n");
            movimento_bispo(bispo - 1); // Chamada recursiva para mover o bispo
        }
    }

    void movimento_rainha(int rainha)
    {
        if(rainha > 0)
        {
            printf(" Esquerda");
            movimento_rainha(rainha - 1);

        }
    }

    void movimento_cavalo(int cavalo)
    {
        while(cavalo--)// movimnto para os lados
            {
                for (int cavaloSobe = 0; cavaloSobe < cavalo; cavaloSobe++)// movimento pra cima
                {
                    printf("Cima \n"); // resultado de for
                }

                printf("Direita \n");// resultado de while
            }
    }
    
int main()
{
    //Seleção de Menu
    int opcao;
    
    //Menu
    
    printf("Selecione uma peça de xadrez:\n");
    printf("========================================\n");
    printf("0. Sair do jogo\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n\n");
    printf("Digite o número da peça:\n");
    scanf("%d", &opcao); // opção para escolher uma peça

    switch(opcao)
    {
        case 1:
            printf("Você escolheu TORRE\n\n");

            // int positTorre; // var para armazenar posição da torre
            // printf("\nVocê escolheu a Torre.\n\n");
            // printf("Informe quantas casas Torre irá andar:\n");
            // scanf("%d", &positTorre); // qtd de casas que torre se deslocará.

            // for(int Ptorre = 0 ;Ptorre < positTorre; Ptorre++)
            // {
            //     printf("Frente ", Ptorre);
            // }
            // return 0;

            movimento_torre(5);
            return 0;

        break;

        case 2:
        // int PositBispo;
        //     printf("Você escolheu o Bispo.\n");
        //     printf("Informe quantas casas o Bispo irá andar:\n");
        //     scanf("%d", &PositBispo);

        //     for(int Pbispo = 0; Pbispo < PositBispo; Pbispo++)
        //     {
        //         printf("Direita cima \n");
        //     }
        printf("Você escolheu o Bispo.\n");
        movimento_bispo(5);
        return 0;

        break;

        case 3:
            // int PositRainha;
            // printf("Você escolheu a Rainha.\n");
            // printf("Informe quantas casas a Rainha irá andar:\n");
            // scanf("%d", &PositRainha);

            // for(int rainha = 0; rainha < PositRainha; rainha++)
            // {
            //     printf("Esquerda \n");
            // }
            printf("Você escolheu a Rainha.\n");
            movimento_rainha(5);
            return 0;

        break;

        case 4:
            // int movimentoCavalo = 1;
            // int cavaloCima;
            // printf("Você escolheu o Cavalo.\n");
            // printf("Movimento do Cavalo Subida:\n");
            // scanf("%d", &cavaloCima); //qtd de casas que o cavalo se deslocará para cima.

            // while(movimentoCavalo--)// movimnto para os lados
            // {
            //     for (int cavaloSobe = 0; cavaloSobe < cavaloCima; cavaloSobe++)// movimento pra cima
            //     {
            //         printf("Cima \n"); // resultado de for
            //     }

            //     printf("Direita \n");// resultado de while
            // }
            printf("Você escolheu o Cavalo.\n");
            movimento_cavalo(2);
            return 0;

        break;

        default:
            printf("Opção inválida. Por favor, escolha uma peça válida.\n");
            return 0;
        break;

    }
    return 0;

    
    
    
}
