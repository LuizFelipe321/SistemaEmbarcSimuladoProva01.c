#include <stdio.h>
#include <stdbool.h>

int atividade2() {
    int a = 6; //define variavel a = 6, tipo int
    int b = 9; //define variavel b = 9, tipo int
    char op = 'S'; //define variavel op, tipo char
    bool flag; //define variavel 'flag', tipo bool
    flag = (a * b > 50) && (op == 'S'); // (6 * 9---> 54 > 50) (VERDADEIRO) e op == S (VERDADEIRO)
    a = (flag) ? a + b : a - b; // 'a' é = flag, portanto 'a' = (VERDADEIRO), logo será a + b, 6 + 9 ---> a = 15 ;
    if (op == 'N' || a > 10) { // se op == 'N' (FALSO) ou a(15) > 10 (VERDADEIRO) , uma das condicoes foi atendida
        b = b - a; // b = 9 - 15 -----> b = -6;
    } else { // Condicao if ja foi atendida.
        b = b + a;
    }
    a = (b < 0) ? -b : b; // a = (-6 < 0 )? (VERDADEIRO), logo 'a' que valia 15 passa a valer ---> -b --> -(-6) ---> a = +6;
    printf("%d %d\n", a, b); // imprime na tela ( 6 -6 );
    return 0; // Fecha o programa
}
