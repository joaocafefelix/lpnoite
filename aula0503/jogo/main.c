#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int magico = rand() % 1000;
    int palpite, total_jogadas = 0;
    do{
        if(total_jogadas > 7){
            printf("Infelizmente terminaram suas chances \n");
            printf("Você está devendo para o caixa \n");
            break;
        }
        printf("Digite seu palpite: \n");
        scanf("%d", &palpite);
        total_jogadas++;

        if(palpite == magico){
            printf("Sortudo. Você ganhou \n");
            printf("Você acertou em %d jogadas \n", total_jogadas);
            printf("Passe no caixa, pegue a grana \n");
            break;
        } else {
            printf("Infelizmente errou \n");
            if(palpite < magico){
                printf("Número é maior\n");
            }else{
                printf("Número é menor \n");
            }
            printf("Essa foi a jogada %d \n", total_jogadas);
        }

    }while(1);

    printf("num: %d \n", magico);
    return 0;
}
