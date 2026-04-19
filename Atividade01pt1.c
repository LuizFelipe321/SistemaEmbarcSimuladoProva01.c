#include <stdio.h>

int atividade1() {
    int a = 5, b = 10, c = 5;
    int r;
    r = (a > b) ? a : b > a ? -b : c; // r = (5 > 10)? r = 'a' --> r = 5 (FALSO); (10 > 5)? r = -b ---> r = -10 (VERDADEIRO); caso a condicao anterior nao fosse verdadeira r = c --> r = 5;
    if (r == ++c) { // se r == (possuir) valor 6, c(5) + 1 = 6     ++c --> é incrementado +1 em c antecipadamente; (FALSO)
        r = r + 2;  // entao faria r = -10 + 2 ---> r = -8
    } else {  // condicao se torna else. (Será atribuida)
        r = r - 3;  //r = -10 - 3 ---> r = -13
    }
    r = (r % 2 == 0) ? r / 2 : r + 1; //r = ( -13 % 2 == 0 )? --> (FALSO), pois resto da divisao -13 por dois nao é = 0
                                      // logo o valor da divisao é impar e nao ocorre a divisao por 2
                                      // ocorrendo entao r + 1 ---> -13 + 1 = -12
    printf("%d %d %d\n", r, --a, --b) ; // logo a saída será ( -12 4 9 ); --a = 5 - 1 e --b 10 - 1
    return 0; // O programa é fechado
}
