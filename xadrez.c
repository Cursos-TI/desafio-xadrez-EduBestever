#include<stdio.h>
/*
Bispo: 5 casas na diagonal superior direita
Torre: 5 casas para a direita
Rainha: 8 casas para a esquerda */

int main(){
    //VARIAVEIS DOS ELEMENTOS QUE VAI TER NO XADREZ
    int option;
    printf("----MENU PRINCIPAL----\n");
    printf("1.INCIAR JOGO\n");
    printf("2.SAIR\n");
    printf("Escolha uma opcao:");
    scanf("%d", &option);


    switch (option)
    {
        case 1: {
            printf("Iniciando jogo!\n");


            break;
        }
        default:{
            printf("Saindo do jogo!\n");
            return 0;
        }
    }
// Vou colocar as variaveis pra usar nos comandos
int bispo = 5;
int torre = 5;
int rainha =5;
int b = 0;
int c = 0;

printf("---------------------------------\n");
printf("MOVIMENTACAO DO BISPO\n");
printf("---------------------------------\n");
// como o bispo tem 5 movimentos, nos vai colocar um for e um contador de passos para o bispinho ;3
    for (int a = 0; a < bispo; a++){
        printf("CIMA\n");
        printf("DIREITA\n");
    
    }
//AQUI VOU USAR OUTRA CONDIÇÃO QUE É WHILE, NO QUAL VAI ME FALAR " ENQUANTO VARIAVEL FOR MENOR QUE TAL VALOR ELE VAI CONTINUAR RODANDO."
    printf("---------------------------------\n");
    printf("MOVIMENTACAO DA TORRE\n");
    printf("---------------------------------\n");
    while (b < torre){
        printf("DIREITA\n");
        b ++;
}
// ESSE VOU USAR O DO QUE VAI SER, DO= FAÇÃ PRIMEIRO E DEPOIS WHILE = ENQUANTO : FAÇA{}, ENQUANTO(CONDIÇÃO)
printf("---------------------------------\n");
printf("MOVIMENTACAO DA RAINHA\n");
printf("---------------------------------\n");
do{
    printf("ESQUERDA\n");
    c++;
}while(c < rainha);
}

