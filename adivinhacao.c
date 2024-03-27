#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // imprime cabecalho do nosso jogo
    printf("      P  /_\\  P                             \n");
    printf("     /_\\_|_|_/_\\                            \n");
    printf(" n_n | ||. .|| | n_n         Bem vindo ao    \n");
    printf(" |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao!\n");
    printf("|" "  |  |_|  |"  " |                       \n");
    printf("|_____| ' _ ' |_____|                        \n");
    printf("      \\__|_|__/");
    printf("\n\n");

    // Criação da variavel segundos passando um time(0) para gerar numeros aleatorios com srand
    int segundos = time(0);
    srand(segundos);

    // Gera um numero inteiro entre 0 e 100
    int numerogrande = rand();
    int numerosecreto = numerogrande % 101;

    int chute;
    int tentativas = 1;
    int pontos = 1000;
    int acertou = 0;
    int nivel;
    int numerotentativas;

    // Seletor de nivel de dificuldade do jogo
    do{
        printf("Qual o nivel de dificuldade?\n");
        printf("(1) Facil (2) Medio (3) Dificil\n\n");
        printf("Escolha: ");
        scanf("%d", &nivel);

        if (nivel == 1)
        {
            numerotentativas = 20;
        } else if (nivel == 2)
        {
            numerotentativas = 15;
        } else if (nivel == 3)
        {
            numerotentativas = 6;
        } else {
            printf("Digite um numero de dificuldade valido! \n");

        }
    } while (nivel < 1 || nivel > 3);
    
    

    for (int i = 1; i < numerotentativas; i++){

        printf("Tentativa %d\n", tentativas);
        printf("\n");
        printf("Qual o seu chute? \n");

        // Escaneia o valor passado pelo usuario e o imprime na tela
        scanf("%d", &chute);
        printf("\n");
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você nao pode chutar numeros negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(maior) {
            printf("\n");
            printf("Seu chute foi maior que o numero secreto\n");
        } 

        else {
            printf("\n");
            printf("Seu chute foi menor que o numero secreto\n");
        }
        
        // Desconta os pontos do jogador conforme as tentativas de acertar o numero aumentam
        int pontosperdidos = (chute - numerosecreto)  / 2;
        pontos = pontos - pontosperdidos;
        tentativas++;
    }

    printf("Fim de jogo!\n");

    if(acertou){
        printf("\n\n");
        printf("            OOOOOOOOOOO              \n ");         
        printf("        OOOOOOOOOOOOOOOOOOO         \n  "); 
        printf("    OOOOOO  OOOOOOOOO  OOOOOO        \n ");
        printf("    OOOOOO      OOOOO      OOOOOO    \n ");
        printf("OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n ");
        printf("OOOOOOOOOO    OOOOOOO    OOOOOOOOOO  \n ");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n"); 
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");  
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO \n"); 
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOO   OOOO   \n");
        printf("OOOO   OOOOOOOOOOOOOOOOOOOO    OOOO     \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO   \n "); 
        printf("    OOOOOO   OOOOOOOOO   OOOOOO       \n");
        printf("        OOOOOO         OOOOOO         \n");
        printf("            OOOOOOOOOOOO              \n"); 
        printf("\n\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de Pontos: %d\n", pontos);
    } else {
       printf("\n\n");
       printf(" \\|/ ____ \\|/ \n" )  ; 
       printf(" @~/ ,. \\~@  \n"  ) ;   
       printf("/_( \\__/ )_\\ \n" )  ;  
       printf("   \\__U_/ \n" );
       printf("\n\n");
       printf("Voce Perdeu!");
    }


}