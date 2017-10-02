/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

#include "cabecalho.h"

pilhaOp * criapilhaOp() {
    return NULL;
};

void pilhaOpPush(pilhaOp * p, char c) {

    p->prim->info = c;

};

char pilhaOpPop(pilhaOp * p){
    pilhaOp *m=NULL;
    char n;
    n = p->prim->info;
    m= p->prim->prox;
  if(p!=NULL) {
        m->prim->prox = p->prim->prox;
    }
    free(p);
    return n;
};

void liberapilhaOp(pilhaOp * p){
    
    
    
};