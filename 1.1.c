/*
implemente uma funcao que indique se um ponto (x,y) esta localizado dentro ou fora de um retangulo. O retangulo eh definido por seus
vertices inferior esquerdo (x0,y0) e superior direito (x1,y1). A funcao deve ter como valor de retorno 1, se o ponto estiver dentro do 
retangulo, e 0 caso contrario, obedecendo ao prototipo:

    int dentro_ret(int x0, int x1, int y0, int y1, int x, int y);
*/

#include<stdio.h>

int dentro_ret(int x0, int x1, int y0, int y1, int x, int y) {
    if (x >= x0 && x <= x1 && y >= y0 && y <= y1) {
        return 1; 
    } else {
        return 0; 
    }
}


int main(){

    int limite_inferior_1,limite_inferior_2,limite_superior_1,limite_superior_2,valor1,valor2,resultado;

    printf("digite os valores do limite inferior do retangulo: ");
    scanf("%d %d",&limite_inferior_1,&limite_inferior_2);

    printf("digite os valores do limite superior do retangulo: ");
    scanf("%d %d",&limite_superior_1,&limite_superior_2);

    printf("digite os valores do ponto: ");
    scanf("%d %d",&valor1,&valor2);

    resultado = dentro_ret(limite_inferior_1,limite_inferior_2,limite_superior_1,limite_superior_2,valor1,valor2);

    printf("resultado: %d", resultado);
}