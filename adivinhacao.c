#include <stdio.h>

int main() {

    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    int pontos = 1000;
    
    
    while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o número secreto\n");
        } 

        else {
            printf("Seu chute foi menor que o número secreto\n");
        }
        
        int pontosperdidos = (chute - numerosecreto)  / 2;
        pontos = pontos - pontosperdidos;
        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Total de Pontos: %d\n", pontos);
}
