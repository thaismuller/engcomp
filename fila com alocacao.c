//ALUNOS: THAIS MULLER 18007926// GUILHERME KLOSOWSKI 18014426
#include <stdlib.h>
#include <stdio.h>
#include<locale.h>

struct no{
    int dado;
    struct no *prox;
};
struct no *inicio=NULL;
struct no *final=NULL;

void enqueue(int i){
    struct no *aux;

    aux=(struct no*)malloc(sizeof(struct no));
    aux->dado=i;
    aux->prox=NULL;
    if(final==NULL){ //se o final= 0, final e inicio estao no mesmo
        inicio=aux;
        final=aux;
    }else{
        final->prox=aux;
        final=aux;
    }
     system("cls");
    printf("Elemento inserido!!.\n");
}
void dequeue(){
    struct no *aux;

    if(final==NULL){
             system("cls");
        printf("FILA VAZIA - NENHUM ELEMENTO INSERIDO.\n");
        return;
    }
    if(final==inicio){
        free(inicio);
        final=NULL;
         system("cls");
        printf("ELEMENTO REMOVIDO.\n");
        return;
    }
    aux=inicio;
    inicio=inicio->prox;
    free(aux);
     system("cls");
    printf("ELEMENTO REMOVIDO.\n");
}
void inicial(){
    if(final==NULL){
        printf("FILA VAZIA \n");
        return;
    }
     system("cls");
    printf("ELEMENTO DO INICIO: %d\n",inicio->dado);
}

void imprime(){
    if(final==NULL){
             system("cls");
        printf("FILA VAZIA");
    }else{
        struct no *p;
     system("cls");
        printf("Fila: \n");
        for(p=inicio; p!=NULL; p=p->prox){
            printf("%d, ", p->dado);
        }
    }
}

int main(){
setlocale(LC_ALL,"Portuguese");
  int opcao, valor1; //variáveis utilizadas no main

    do{
        printf("*********************************************\n");
        printf("1. Inserir valor                             \n");
        printf("2. Remover valor                             \n");
        printf("3. Imprimir valor da frente da fila          \n");
        printf("4. Imprimir fila                             \n");
        printf("5. Limpar a tela                             \n");
        printf("6. Sair                                      \n");
        printf("********************************************* \n");
        printf("Escolha uma opção: ");

        scanf("%d", &opcao); //lê a opção
            switch(opcao){ //recebe a opção pro case
                case 1:
                    printf("Insira o valor desejado: ");
                    scanf("%d", &valor1); //recebe e armazena o valor em valor1
                    enqueue(valor1);
                    break;
                case 2:
                    dequeue(); //remove valor
                    break;
                case 3:
                    inicial(); //mostra elemento do topo da pilha
                    break;
                case 4:
                    imprime();
                    break;
                case 5:
                    system("cls");
                    break;
                default:
                    printf("Opção inválida! \n");
            }

    }while (opcao!=6);
}
