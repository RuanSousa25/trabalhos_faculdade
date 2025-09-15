#include <stdio.h>

int main(){
    int movimentacaoTorre, movimentacaoBispo, movimentacaoRainha, movimentacaoCavalo;

    // Movimentaçao da torre
    void movimentaTorre(int numeroMovimento){
        printf("Torre moveu para a direita\n");
        if(numeroMovimento-1 > 0){
            movimentaTorre(numeroMovimento - 1);
        };
    };
    //Movimentação do bispo
    void movimentaBispo(int numeroMovimento){
        for (int i = 0; i < 1; i++){
            printf("Bispo move para a cima\n");
            for (int j = 0; j < 1; j++){
                printf("Bispo move para a direita\n");
            }
        }
        if(numeroMovimento-1 > 0){
            movimentaBispo(numeroMovimento - 1);
        }
    }
    //movimentação da rainha
    void movimentaRainha(int numeroMovimento){
        printf("Rainha moveu para a cima\n");
        if(numeroMovimento-1 > 0){
            movimentaRainha(numeroMovimento - 1);
        };
    };

    printf("Insira o número de movimentos da torre:\n");
    scanf("%d", &movimentacaoTorre);
    
    movimentaTorre(movimentacaoTorre);

    printf("Insira o número de movimentos do bispo:\n");
    scanf("%d", &movimentacaoBispo);
    movimentaBispo(movimentacaoBispo);

    printf("Insira o número de movimentos da rainha:\n");
    scanf("%d", &movimentacaoRainha);
    movimentaRainha(movimentacaoRainha);

    printf("Insira a quantidade de movimentos do cavalo:\n");
    scanf("%d", &movimentacaoCavalo);

    //Movimentação do cavalo
    for (int m = 0; m < movimentacaoCavalo; m++){
        int vertical = 0;
        do{
            printf("Cavalo move para cima\n");
            vertical++;

            int horizontal = 0;
            while (horizontal < 1)
            {
                if(vertical < 2){
                    break;
                }
                printf("Cavalo move para a direita\n");
                horizontal++;
            };

            if(vertical<2){
                continue;
            }
        } while (vertical < 2);
    }
}