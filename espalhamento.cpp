#include <stdio.h>
#define TAM 10

int vetor[TAM];
int contador=0;
void preenche(){
    int i=0;
    while(i<TAM){
        vetor[i]=-1;
    }
}

int espalha(int chave){
    return chave%TAM; //pega o numero q vc vai por, e divide pelo tamanho, o resto da divisao é a posição
}
int reespalha(int chave){
    return (chave+1)%TAM;
}
void insere(int chave){
    int posicao= espalha(chave);
    while (contador<TAM){
    if(posicao==1){
        vetor[posicao]=chave;
        }else{
            posicao= reespalha(posicao);
            vetor[posicao]= chave;
        }
        contador++;
    }
    printf("nao tem espaço");
}

void busca(int chave){
    int posicao = espalha(chave);
    int i;
    i=0;
    int encontrado;
    while(i<TAM){
        if(vetor[posicao]==chave){
            encontrado=1;
        }else{
        posicao= reespalha(posicao);
        encontrado=0;
        }
        i++;
    }
    if (encontrado==1){
        printf("valor encontrado");
    }else{
        printf("valor nao encontrado");
    }
}

void imprime(){
    int i=0;
    printf("elementos\n\n");
   //for (i=0; i<TAM; i++)
    while(i<TAM){
        printf("%d", vetor[i]);
        i++;
    }
}

int main(int opc){
    int opc=0;
    printf("1-insere \n 2-busca \n 3- imprime");
    scanf("%d", &opc);



}
