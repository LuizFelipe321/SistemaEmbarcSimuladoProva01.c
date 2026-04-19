#include <stdio.h>

int main() {

    int idade, quantidadeIngresso, soma, valorIngresso;

    char opcao, ing2, ing3;

    printf("Escreva a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a quantidade de ingressos (1 a 3): ");
    scanf("%d", &quantidadeIngresso);

    printf("Tipo do ingresso 1 (I ou M): ");
    scanf(" %c", &opcao);

    if (idade < 12 || idade > 60) {
        valorIngresso = 20;
    } else {
        switch(opcao) {
            case 'I':
                valorIngresso = 40;
                break;
            case 'M':
                valorIngresso = 20;
                break;
            default:
                printf("Tipo de ingresso invalido!\n");
     }
    }

    soma = soma + valorIngresso;

    if (quantidadeIngresso == 2) {

        printf("Tipo do ingresso 2 (I ou M): ");
        scanf(" %c", &ing2);

        if (idade < 12 || idade > 60) {
            valorIngresso = 20;
        } else {
            switch(ing2) {
                case 'I':
                    valorIngresso = 40;
                    break;
                case 'M':
                    valorIngresso = 20;
                    break;
                default:
                    printf("Tipo de ingresso invalido!\n");
         }
        }

        soma = soma + valorIngresso;
    }

    if (quantidadeIngresso == 3) {

        printf("Tipo do ingresso 3 (I ou M): ");
        scanf(" %c", &ing3);

        if (idade < 12 || idade > 60) {
            valorIngresso = 20;
        } else {
            switch(ing3) {
                case 'I':
                    valorIngresso = 40;
                    break;
                case 'M':
                    valorIngresso = 20;
                    break;
                default:
                    printf("Tipo de ingresso invalido!\n");

         }
        }

        soma = soma + valorIngresso;
    }

    printf("Valor total a pagar: R$%d,00\n", soma);

    return 0;
}
