#include <stdio.h>
#include <stdlib.h>
#define TAM 3

 int fila [TAM];
 int frente=0;
 int fim=0;
 int cont=0;

 void enqueue (int i){
 if(cont==TAM){
    printf("fila cheia, nenhum elemento inserido\n\n");
    }
    else{
        scanf("%d", &i);
        fila[fim]=i;
        cont++;
        printf("elemento inserido\n\n");

    }
    if(fim==TAM-1){
        fim=0;
    }
    else
        fim++;
}


 void dequeue(){ //remove elemento da fila
     if(cont==0){
        printf("fila vazia\n\n"); //ta vazia
     }
     else
     cont--;

     if (frente==TAM-1){
        frente =0;
        printf("elemento %d removido\n\n", fila[TAM-1]);

     }
     else {
        printf("elemento %d removido\n\n", fila[frente]);
        frente++;
        return;
     }

 }
    void imprimirTodos(){
       if(cont==0){
        printf("fila vazia\n\n");
       }
       else{
        int i, j;
        i=frente;
        for(j=0; j<cont; j++){
        if(i==TAM){
           i=0;
        }printf("%d\n", fila[i]);
        i++;
}
       }
    }
    void primeiroElemento(){
       printf("\n\nprimeiro elemento: %d\n\n", fila[frente]);
    }

    int menu(int opc){

     printf("1- inserir elemento\n");
     printf("2- remover elemento\n");
     printf("3- imprimir primeiro elemento\n");
     printf("4-imprimir todos \n");
     printf(" Escolha uma opcao\n");
     printf(" digite 5 para sair...\n\n\n");
     printf("__________________________________");
     scanf("%d", &opc);
     return opc;
    }
   int main(){
       int opc, i;
       do
       {
        switch (opc = menu(opc))
        {

 case 1:
     enqueue (i);
    break;

 case 2:
      dequeue();
     break;

 case 3:
    primeiroElemento();
   break;

 case 4:
    imprimirTodos();
   break;
       }
      }  while(opc!=5);
   }

