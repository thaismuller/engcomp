//arquivo Ponto.C
#include <stdlib.h> //usaremos a constante NULL
#include <stdio.h>
#include <math.h> //realizar o calculo de distancia
#include "Ponto.h" //inclui o arquivo que tem os prototipos
//inicio da estrutura e definindo o tipo de dado
struct ponto {
       float x;
       float y;
};

//arquivo Ponto.C, inicio da struct
Ponto* pto_cria(float x, float y){            //sizeof diz o numero de bytes que um tipo de dado tem
    Ponto*p = (Ponto*) malloc(sizeof(Ponto)); //malloc aloca um espaço de memoria e retorna ponteiro do tipovoid
    if(p !=NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

//liberando a memoria alocada para um novo ponto
void pto_libera(Ponto* p){
    free(p);
}

//acessar o valor de cada ponto x e y
void pto_acessa(Ponto* p, float* x, float* y){//passa os valores por referencia
     *x = p->x;
     *y = p->y;
}

//colocar valores para os pontos x e y
void pto_atribui(Ponto* p, float x, float y){
   p->x = x;
   p->y = y;
}

//para calcular a distancia entre os dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){ //usa o float porque deve retornar um valor
    float dx = p1->x - p2->x; //fazendo o delta do ponto, inicial menos o final
    float dy = p1->y - p2->y;
    return sqrt((dx*dx)+(dy*dy));
}

