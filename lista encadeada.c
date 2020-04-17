#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int lista[TAM];
int cont=0; //usa a variavel pra saber quantos elementos tem na lista

void inserir(int i){
    int aux, j;
    if(cont==TAM){ //se o contador é igual ao tamanho cont=3
        printf("lista cheia");
        return;
    }
    for(j=0; j<cont; j++){ //usa-se um contador para varrer o vetor
        if(lista[j]==i){ //e ver se o valor não é igual ao valor inserido
            printf("valor repetido"); //mensagem de aviso
            return; //fecha o processo
        }
    } //laço para deixar o vetor em ordem:
        for(j=cont; j>=0; j--){ //laço usando o valor do contador, vindo do ultimo elemento até o primeiro
            if(j>0 && lista[j-1]>i){ //verifica se o valor inserido é menor que o valor anterior do vetor
                lista[j]=lista[j-1];
            }else{
                printf("valor %d inserido", i);
                lista[j]=i; //recebe o numero
                break; //fecha o processo
            }
            if(j==0){ //se estiver colocando na primeira posição do vetor
                lista[j]=lista[j+1];
                lista[j]=i;
            }
        }
        cont++;
}


void buscar(int i){
    int aux;
    if (cont ==0){ //se o contador é igual a zero, nao tem nenhum elemento na lista
        printf("\n\nLista vazia!!!");
        return;
    }

        scanf("%d", &i); //lê o elemento que se deseja buscar
        for(aux=0; aux<cont; aux ++){ //usa um contador auxuliar para varrer o vetor
           if(lista[aux]==i){ //se o elemento inserido é igual ao elemento do vetor
            printf("\n\nelemento %d encontrado na posicao %d", lista[aux], aux);

           }
          if(lista[aux]!=i) //se todos os elementos do vetor forem diferentes
           printf("\nNAO ENCONTRADO");
        }
}

void remover(int i){
   int aux, aux2;
   if (cont==0){ //se o contador estiver em 0
    printf("Nao existe elementos para remocao");
    return;
   }
    scanf("%d", &i); //le o numero que quer inserir
    for (aux=0; aux<cont; aux++) //varre o vetor
     if(lista[aux]==i){ //se achar o numero
        for(aux2=aux; aux2<cont-1; aux2++) //faz um contador auxiliar para remover o num
            lista[aux2]= lista[aux2+1]; //faz receber o proximo elemento pra nao deixar buraco
     }
     cont --;
     printf("elemento %d removido", i);//mostra o elemento removido
     return;


        printf("elemento nao encontrado"); //se nao tem o elemento
}

void imprimir(){
     int i;
     if (cont==0){ //contador em zero, nenhum elemento
        printf("lista vazia!!!");
     }
     else {
        printf("a lista e: ");



     for(i=0; i<cont; i++)//laço pra imprimir todos os elementos
        printf("elemento [%d] : %d \n", i, lista[i]); //mostra o elemento e a posição que se encontra
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
            scanf("%d", &i);
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


