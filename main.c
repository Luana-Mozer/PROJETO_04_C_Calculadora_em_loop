// importando biblioteca
#include <stdio.h>
// criando main
int main() {
    long int num, outro_num, resultado;
// Para informar como encerrar a soma    
    printf("Digite 0 quando quiser encerrar a soma...\n");
//informe o numero
    printf("Digite um numero: ");
    scanf("%ld", &num);
// informe outro numero
    printf("Digite outro numero: ");
    scanf("%ld", &outro_num);
// primeiro resultado    
    resultado = num + outro_num;
// criando laço de repetição    
    while (1) {
// informando o resultado
        printf("Resultado: %ld\n", resultado);
//criando looping
        printf("Digite outro numero: ");
        scanf("%ld", &num);
// caso digite 0 a soma e encerrada
            if (num == 0) {
            printf("Soma encerrada, o total e: %ld\n", resultado);
            break;
            }
// resultado
        resultado += num;
    }
// finalizar programa
    return 0;
}