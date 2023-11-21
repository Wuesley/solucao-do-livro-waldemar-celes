/*
Implemente uma função para testar se um numero inteiro é primo ou não. Essa função deve obedecer ao protótipo a seguir e ter 
como valor de retorno 1 se n for primo e 0 caso contrário.

    int primo(int n)
*/

#include<stdio.h>

int primo(int n){
    
   if (n <= 1) {
        return 0;  // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // Encontrou um divisor, não é primo
        }
    }

    return 1;  // Se nenhum divisor foi encontrado, é primo
}

int main(){

    int numero;
    int resultado;

    printf("digite um numero inteiro: ");
    scanf("%d",&numero);

    printf("%d",resultado = primo(numero));
    

}