//Thais Muller 18007926
//Guilherme Klosowski 18014426

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int lista[TAM];
int cont=0; //usa a variavel pra saber quantos elementos tem na lista



void inserir(int i)
 {
     int aux = 0;
     int j,atual;

    if (cont==TAM){//se o contador estiver igual a tam, lista cheia
        printf("Lista cheia!!!");
        system("cls");
    return;
    }

       scanf("%d", &i);
        lista[cont]=i; //contador recebe
        for (aux=0; aux<cont; aux++){
        if (lista[aux]==i){
            printf("elemento repetido");
            return;
            system("cls");
        }
        }
        for(i=cont; i<TAM; i++){
            if(lista[aux]> lista[aux+1]){
                atual = lista[aux]; //armazena temporariamente no ATUAL
                lista[aux]= lista[aux+1];
                lista[aux+1]= atual;
                }
        }



     lista[cont]=i;
    cont++;//incrementa para que a proxima inserção receba a posição correta
    printf("\n\nelemento inserido: %d", cont);

}

void buscar(int i){
    int aux;
    if (cont ==0){
        printf("\n\nLista vazia!!!");
        return;
    }

        scanf("%d", &i);
        for(aux=0; aux<cont; aux ++){
           if(lista[aux]==i){
            printf("\n\nelemento %d encontrado na posicao %d", lista[aux], aux);

           }
          if(lista[aux]!=i)
           printf("\nNAO ENCONTRADO");
        }
}

void remover(int i){
   int aux, aux2;
   if (cont==0){
    printf("Nao existe elementos para remocao");
    return;
   }
    scanf("%d", &i);
    for (aux=0; aux<cont; aux++)
     if(lista[aux]==i){
        for(aux2=aux; aux2<cont-1; aux2++)
            lista[aux2]= lista[aux2+1];
     }
     cont --;
     printf("elemento %d removido", i);
     return;


        printf("elemento nao encontrado");
}

void imprimir(){
     int i;
     if (cont==0){
        printf("lista vazia!!!");
     }
     else {
        printf("a lista e: ");



     for(i=0; i<cont; i++)
        printf("elemento [%d] : %d ", i, lista[i]);
     }
}

int menu (int opc){

    printf("\n 1- inserir \n");
    printf("\n 2- buscar \n");
    printf("\n 3 remover \n");
    printf("\n 4-imprimir \n");
    printf("\n 5- sair \n");
    printf("\n escolha uma opcao ");
    scanf("%d", &opc);
    return opc;
}

int main(){

    int opc, i;
    do
    {
        switch(opc = menu(opc))
        {
        case 1:
            inserir(i);
            break;

        case 2:
            buscar(i);
            break;

        case 3:
            remover(i);
            break;

        case 4:
            imprimir();
            break;

        }
    } while (opc!=5);

}







