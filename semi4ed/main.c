/*
// Lista 04: Calculadora
// 05/10/2017
// Gabriel Porto Oliveira (patonoideoriginal@gmail.com), Marina Silva da Silva (marina_silva98@hotmail.com).
 */

#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main(int argc, char** argv) {
    int m;
    float valor;
    char op;
    Calc *cal = criaCalculadora();
    do {
        printf("Menu:\n 1-Adicionar valor\n 2-Adicionar operação\n 3-Realizar Cálculo\n 4-Imprimir Pilhas\n 5-Sair");
        scanf("%i", &m);
        switch (m) {
            case 1:{
                printf("\nInforme um valor real:");
                scanf("%f", valor);
                insereValor(cal, valor);
                break;
            }
            case 2:{
                printf("\nInforme um operador:\n  (+)Adicao\n  (-)Subtracao\n  (*)Multiplicacao\n  (/)Divisao\n");
                scanf("%c", op);
                insereOp(cal, op);
                break;
            }
            case 3:{
                realizaCalc(cal);
                break;
            }
            case 4:{
                imprimeCalc(cal);
                break;
            }
            case 5:{
                printf("Saindo...\n");
                break;
            }
            default:{
                printf("Opcao invalida!!!");
                break;
            }
        }
    } while (m != 5);
    return (EXIT_SUCCESS);
}

