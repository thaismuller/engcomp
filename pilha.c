#include <stdio.h>
#include <stdlib.h>
#define N 10 //deixa estatico o valor do vetor para 10

int pilha[N], valor, topo=-1;
//o topo começa antes da primeira posição do vetor, ou seja, -1

void push(int valor){ //push coloca os elementos na pilha
    if (topo == N-1){
        printf("PILHA CHEIA\n");
    return;
}
    topo++; //avança uma posição na pilha e a posição da pilha vai receber 'valor'
    pilha[topo]=valor;
}

void pop(){ //pop apaga um elemento da pilha
    int aux; //aux vai armazenar o numero que foi retirado da pilha
    if (topo == -1){
        printf("PILHA VAZIA\n");
    return;
    }
    aux=pilha[topo]; //aux vai receber o valor do topo para posteriormente mostrar no printf
    topo--;
    printf("VALOR RETIRADO: %d\n",aux);
}

void topoPilha(){ //informa o elemento que se encontra no topo da pilha
    if(pilha[topo]==-1){
        printf("pilha vazia\n");
    return;
    }
    printf("\n\n TOPO DA PILHA: %d\n",pilha[topo]);
}

void imprimePilha(){ //le o vetor da pilha e imprime o valor do vetor
    int i;
    if(pilha[topo]==-1){
        printf("pilha vazia\n");
    return;
    }
    for(i=topo;i>-1;i--)
    printf("\n%d",pilha[i]);
}

main(){ //o main executa os valores da pilha com push e retira os elementos com pop, imprime a pilha e informa o elemento no topo da pilha
push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
push(70);
push(80);
push(90);
push(100);
pop();
push(110);
imprimePilha();
topoPilha();

}
