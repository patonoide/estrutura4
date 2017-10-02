/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cabecalho.h
 * Author: Asus
 *
 * Created on 29 de Setembro de 2017, 21:16
 */

struct lista {
    char info;
    struct lista * prox;
};
typedef struct lista Lista;

struct pilhaOp {
    Lista * prim;
};
typedef struct pilhaOp pilhaOp;

struct pilhaFloat {
    float vet[20];
    int n;
};
typedef struct pilhaFloat pilhaFloat;

struct calculadora {
    pilhaFloat * valores;
    pilhaOp * operadores;
};
typedef struct calculadora Calc;

pilhaOp * criapilhaOp();
void pilhaOpPush(pilhaOp * p, char c);
char pilhaOpPop(pilhaOp * p);
void liberapilhaOp(pilhaOp * p);
void imprimepilhaOp(pilhaOp * p);
pilhaFloat * criapilhaFloat();
void pilhaFloatPush(pilhaFloat * p, float valor);
float pilhaFloatPop(pilhaFloat * p);
void liberapilhaFloat(pilhaFloat * p);
void imprimepilhaFloat(pilhaFloat * p);
Calc * criaCalculadora();
void imprimeCalc(Calc *cal);
void insereOp(Calc * cal, char c);
void insereValor(Calc * cal, float valor);
void realizaCalc(Calc * cal);









