


struct no{
    int dado;
    struct no *prox;
};
struct no inicio*

void inserte(int i){
struct no*aux;

aux= (struct no*) malloc(sizeof(struct no))
aux -> dado = i; //valor que ta no struct no vai receber i que passei por parametro
aux ->prox =NULL; //ta apontando pra nada
if (final==NULL){ //fila sem nada
    inicio = aux;
    final = aux;
}
else{
    final -> prox= aux; //o dado que inseri na minha fila vai pro final da fila, ta jogando da emsma forma da pillha, o reg fica no final
    final = aux;
}
printf ("elemento %d inserido", final->dado);



}

void remover(){
struct no *aux;

if(final==NULL)
printf("fila vazia"){
return;

}
if(final ==inicio){ //removendo um elemento so
    free(inicio);
    final= NULL;
    printf("elemento %d removido com suceeeeeeeeeesso ");
    return;
}
 aux = inicio;
 inicio = inicio-> prox; //vai receber o segundo valor e removo o elemento anterior
 free(aux);
 printf("elemento %d removido com suceeeeeesso", aux->dado);//elemento que tava no inicio da fila no primeiro momento
}

void inicio (){

if final==null
    printf(a fila esta vazia)
    return
}
