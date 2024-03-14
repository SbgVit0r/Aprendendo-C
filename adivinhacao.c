#include <stdio.h>
 
int main(){
    // imprime cabeçalho do jogo
    printf("*************************************\n");
    printf("* Bem vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");
    
    int numerosecreto = 42;
    
    int chute;
    
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d, o numero secreto é %d ", chute, numerosecreto);
    
    
    //  printf("O numero %d é o numero secreto. Não conta pra ninguem!\n", numerosecreto);
}