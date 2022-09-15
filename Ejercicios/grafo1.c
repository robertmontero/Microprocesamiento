#include <stdio.h>
#include <stdlib.h>

typedef struct nodo nodo; 
struct nodo{
    int dato;
    struct nodo* ap1;
    struct nodo* ap2;
    struct nodo* ap3;
    struct nodo* ap4;
    struct nodo* ap5;
    struct nodo* ap6;
    struct nodo* ap7;
    struct nodo* ap8;
    struct nodo* ap9;
    struct nodo* ap10;
};

void imprimirgrafo(nodo** vertice);
nodo * crearnodo(int dato);

int main(int argc, const char* argv[]){
   nodo * LLLL = crearnodo(1);
   nodo * RLRL = crearnodo(6);
   nodo * LLRL = crearnodo(3);
   nodo * RLRR = crearnodo(7);
   nodo * RRRL = crearnodo(9);
   nodo * LLLR = crearnodo(2);
   nodo * LRLL = crearnodo(4);
   nodo * RRLR = crearnodo(8);
   nodo * LRLR = crearnodo(5);
   nodo * RRRR = crearnodo(10);
   
   LLLL->ap1=RLRL;
   RLRL->ap2=LLRL;
   LLRL->ap3=RLRR;
   LLRL->ap4=RRRL;
   RLRR->ap5=LLLR;
   RRRL->ap6=LRLL;
   LLLR->ap7=RRLR;
   LRLL->ap8=RRLR;
   RRLR->ap9=LRLR;
   LRLR->ap10=RRRR;
   
   imprimirgrafo(&LLLL);
   printf("->");
   imprimirgrafo(&RLRL);
   printf("->");
   imprimirgrafo(&LLRL);
   printf("->");
   imprimirgrafo(&RLRR);
  return 0;
}
void imprimirgrafo(nodo ** vertice){
  printf("%d",(*vertice)->dato); /*
  printf("%d",(*vertice)->ap1->dato);
  printf("%d",(*vertice)->ap2->dato);
  printf("%d",(*vertice)->ap3->dato);
  printf("%d",(*vertice)->ap4->dato);
  printf("%d",(*vertice)->ap5->dato);
  printf("%d",(*vertice)->ap6->dato);
  printf("%d",(*vertice)->ap7->dato);
  printf("%d",(*vertice)->ap8->dato);
  printf("%d",(*vertice)->ap9->dato);
  printf("%d",(*vertice)->ap10->dato); */
}

nodo * crearnodo(int dato){
  nodo* nuevo = malloc(sizeof(nodo));
  nuevo->dato=dato;
  //nuevo->lista=null;
  return nuevo;
}