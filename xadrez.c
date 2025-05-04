#include<stdio.h>
/*
Bispo: 5 casas na diagonal superior direita
Torre: 5 casas para a direita
Rainha: 8 casas para a esquerda */

/*int main(){
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

#include<stdio.h>
int bispo(int n){
    if(n < 5){
        for(int l = 0; l < 1; l++){ 
            int v = 0; // LINHA
            printf("CIMA e ");
            while(v == l){
                printf("DIREITA\n");
                v ++;
            }
    }

    }else{
        return 1;
    } return bispo(n+1);
  
}
int rainha(int n1){
   if(n1 < 8){
    printf("Esquerda\n");
    rainha(n1+1);
   }
   else{
    return 1;
   }
}


int torre(int n2){
    if(n2 < 5){
        for(int t=0;t<1;t++){
            printf("DIREITA\n");
        }
    }else{
        return 1;
    }torre(n2+1);
}

int cavalo(int n3){
    if (n3 < 2)
    {
        for(int l = 0; l < 1; l++)
        {
            int c = 0;//COLUNA
            while(c < 1){
            printf("DIREITA\n");
            c++;
        }
        }printf("CIMA\n");
    }else{ return 1;}
    
  
}*/
//xadrez v2 - fiz outro 

int main(){
    printf("_________\n");
        printf("BISPO\n");
    printf("_________\n");
        bispo(0);
        //RAINHA
    printf("_________\n");
        printf("RAINHA\n");
    printf("_________\n");
        rainha(0);
    printf("_________\n");
        printf("TORRE\n");
    printf("_________\n");
        torre(0);
    printf("_________\n");
        printf("CAVALO\n");
    printf("_________\n");
        cavalo(1);
    return 0;
}
//ENTENDI QUE NÃO SEI NADA DE LOGICA E XADREZ KKKKKKKKKK, FIZ ESSA GAMBIARRA AI, QUALQUER COISA 
//AVISA, QUE TIME!!